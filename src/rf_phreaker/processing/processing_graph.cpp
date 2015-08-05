#include "stdafx.h"
#include "rf_phreaker/processing/processing_graph.h"
#include "rf_phreaker/processing/node_defs.h"
#include "rf_phreaker/processing/switch_body.h"
#include "rf_phreaker/processing/collection_manager_body.h"
#include "rf_phreaker/processing/gsm_processing_body.h"
#include "rf_phreaker/processing/gsm_output_and_feedback_body.h"
#include "rf_phreaker/processing/umts_processing_body.h"
#include "rf_phreaker/processing/umts_output_and_feedback_body.h"
#include "rf_phreaker/processing/lte_processing_body.h"
#include "rf_phreaker/processing/lte_output_and_feedback_body.h"
#include "rf_phreaker/common/delegate_sink.h"
#include "rf_phreaker/common/log.h"
#include "tbb/task_scheduler_init.h"

using namespace rf_phreaker::scanner;
using namespace rf_phreaker::processing;

processing_graph::processing_graph(void)
{}

processing_graph::~processing_graph(void) {}

void processing_graph::start(scanner_controller_interface *sc, data_output_async *out, const collection_info_containers &collection_info, const rf_phreaker::settings &config)
{
	std::lock_guard<std::recursive_mutex> lock(mutex_);

	is_initialized_ = false;
	is_cancelled_ = false;

	if(thread_ && thread_->joinable()) {
		cancel();
		wait();
	}

	thread_.reset(new std::thread([this](scanner_controller_interface *sc, data_output_async *out, const collection_info_containers &collection_info, const rf_phreaker::settings &config) {
		try {
			start_node_.reset();
			collection_manager_node_.reset();
			nodes_.clear();

			LOG(LINFO) << "gsm sweep collection settings: " << config.gsm_sweep_collection_.sampling_rate_ << ", " << config.gsm_sweep_collection_.bandwidth_ << ", "
				<< config.gsm_sweep_collection_.collection_time_ << ".";
			LOG(LINFO) << "gsm sweep general settings: " << config.gsm_sweep_general_.band_power_threshold_ << ", " << config.gsm_sweep_general_.side_power_threshold_ << ", "
				<< config.gsm_sweep_general_.perform_sync_correlations_ << ", " << config.gsm_sweep_general_.sync_corr_confidence_threshold_ << ".";

			LOG(LINFO) << "gsm layer 3 collection settings: " << config.gsm_layer_3_collection_.sampling_rate_ << ", " << config.gsm_layer_3_collection_.bandwidth_ << ", "
				<< config.gsm_layer_3_collection_.collection_time_ << ".";
			LOG(LINFO) << "gsm layer 3 general settings: " << config.gsm_layer_3_general_.band_power_threshold_ << ", " << config.gsm_layer_3_general_.side_power_threshold_ << ", "
				<< config.gsm_layer_3_general_.perform_sync_correlations_ << ", " << config.gsm_layer_3_general_.sync_corr_confidence_threshold_ << ".";
			LOG(LINFO) << "gsm layer 3 decode settings: " << config.gsm_layer_3_decode_.max_update_threshold_ << ", " << config.gsm_layer_3_decode_.minimum_collection_round_ << ", "
				<< config.gsm_layer_3_decode_.decode_threshold_ << ", " << config.gsm_layer_3_decode_.decode_minimum_threshold_ << config.gsm_layer_3_decode_.minimum_decode_count_ << ", "
				<< config.gsm_layer_3_decode_.should_prioritize_layer_3_ << ".";


			LOG(LINFO) << "umts sweep collection settings: " << config.umts_sweep_collection_.sampling_rate_ << ", " << config.umts_sweep_collection_.bandwidth_ << ", "
				<< config.umts_sweep_collection_.collection_time_ << ".";
			LOG(LINFO) << "umts sweep general settings: " << config.umts_sweep_general_.sensitivity_ << ", " << config.umts_sweep_general_.full_scan_interval_ << ", "
				<< config.umts_sweep_general_.num_coherent_slots_ << ".";

			LOG(LINFO) << "umts layer 3 collection settings: " << config.umts_layer_3_collection_.sampling_rate_ << ", " << config.umts_layer_3_collection_.bandwidth_ << ", "
				<< config.umts_layer_3_collection_.collection_time_ << ".";
			LOG(LINFO) << "umts layer 3 general settings: " << config.umts_layer_3_general_.sensitivity_ << ", " << config.umts_layer_3_general_.full_scan_interval_ << ", "
				<< config.umts_layer_3_general_.num_coherent_slots_ << ".";
			LOG(LINFO) << "umts layer 3 decode settings: " << config.umts_layer_3_decode_.max_update_threshold_ << ", " << config.umts_layer_3_decode_.minimum_collection_round_ << ", "
				<< config.umts_layer_3_decode_.decode_threshold_ << ", " << config.umts_layer_3_decode_.decode_minimum_threshold_ << config.umts_layer_3_decode_.minimum_decode_count_ << ", "
				<< config.umts_layer_3_decode_.should_prioritize_layer_3_ << ".";


			LOG(LINFO) << "lte sweep collection settings: " << config.lte_sweep_collection_.sampling_rate_ << ", " << config.lte_sweep_collection_.bandwidth_ << ", "
				<< config.lte_sweep_collection_.collection_time_ << ".";
			LOG(LINFO) << "lte sweep general settings: " << config.lte_sweep_general_.sync_quality_confidence_threshold_ << ", " << config.lte_sweep_general_.full_scan_interval_ << ".";

			LOG(LINFO) << "lte layer 3 collection settings: " << config.lte_layer_3_collection_.sampling_rate_ << ", " << config.lte_layer_3_collection_.bandwidth_ << ", "
				<< config.lte_layer_3_collection_.collection_time_ << ".";
			LOG(LINFO) << "lte layer 3 general settings: " << config.lte_layer_3_general_.sync_quality_confidence_threshold_ << ", " << config.lte_layer_3_general_.full_scan_interval_ << ".";
			LOG(LINFO) << "lte layer 3 decode settings: " << config.lte_layer_3_decode_.max_update_threshold_ << ", " << config.lte_layer_3_decode_.minimum_collection_round_ << ", "
				<< config.lte_layer_3_decode_.decode_threshold_ << ", " << config.lte_layer_3_decode_.decode_minimum_threshold_ << config.lte_layer_3_decode_.minimum_decode_count_ << ", "
				<< config.lte_layer_3_decode_.should_prioritize_layer_3_ << ".";

			graph_ = (std::make_shared<tbb::flow::graph>());

			start_node_ = std::make_shared<start_node>(*graph_, [=](add_remove_collection_info &info) { return true; }, false);
			collection_manager_node_ = std::make_shared<collection_manager_node>(*graph_, tbb::flow::serial, 
				collection_manager_body(graph_.get(), sc, collection_info, config.packet_output_, config));

			auto max_limit = tbb::task_scheduler_init::default_num_threads();
			if(config.num_items_in_flight_)
				max_limit = config.num_items_in_flight_;

			auto limiter = std::make_shared<limiter_node>(*graph_, max_limit);

			auto gsm_sweep_cell_search = std::make_shared<gsm_cell_search_node>(*graph_, tbb::flow::serial, gsm_processing_body(
				gsm_cell_search_settings(config.gsm_sweep_collection_, config.gsm_sweep_general_, config.gsm_layer_3_decode_)));
			auto gsm_sweep_output_feedback = std::make_shared<gsm_output_and_feedback_node>(*graph_, tbb::flow::serial, gsm_sweep_output_and_feedback_body(out));
			auto gsm_layer_3_cell_search = std::make_shared<gsm_cell_search_node>(*graph_, tbb::flow::serial, gsm_processing_body(
				gsm_cell_search_settings(config.gsm_layer_3_collection_, config.gsm_layer_3_general_, config.gsm_layer_3_decode_)));
			auto gsm_layer_3_decode = std::make_shared<gsm_layer_3_decode_node>(*graph_, tbb::flow::serial, gsm_processing_body(
				gsm_cell_search_settings(config.gsm_layer_3_collection_, config.gsm_layer_3_general_, config.gsm_layer_3_decode_)));
			auto gsm_layer_3_output_feedback = std::make_shared<gsm_output_and_feedback_node>(*graph_, tbb::flow::serial, gsm_layer_3_output_and_feedback_body(out));

			auto umts_sweep_cell_search = std::make_shared<umts_cell_search_node>(*graph_, tbb::flow::serial, umts_processing_body(
				umts_cell_search_settings(config.umts_sweep_collection_, config.umts_layer_3_decode_, config.umts_sweep_general_, 5), sc));
			auto umts_sweep_output_feedback = std::make_shared<umts_output_and_feedback_node>(*graph_, tbb::flow::serial, umts_sweep_output_and_feedback_body(out));
			auto umts_layer_3_cell_search = std::make_shared<umts_cell_search_node>(*graph_, tbb::flow::serial, umts_processing_body(
				umts_cell_search_settings(config.umts_layer_3_collection_, config.umts_layer_3_decode_, config.umts_layer_3_general_, 100), sc, &is_cancelled_));
			auto umts_layer_3_decode = std::make_shared<umts_layer_3_decode_node>(*graph_, tbb::flow::serial, umts_processing_body(
				umts_cell_search_settings(config.umts_layer_3_collection_, config.umts_layer_3_decode_, config.umts_layer_3_general_, 100), sc));
			auto umts_layer_3_output_feedback = std::make_shared<umts_output_and_feedback_node>(*graph_, tbb::flow::serial, umts_layer_3_output_and_feedback_body(out));

			auto lte_sweep_cell_search = std::make_shared<lte_cell_search_node>(*graph_, tbb::flow::serial, lte_processing_body(
				lte_processing_settings(config.lte_sweep_collection_, config.lte_layer_3_decode_, config.lte_sweep_general_)));
			auto lte_sweep_output_feedback = std::make_shared<lte_output_and_feedback_node>(*graph_, tbb::flow::serial, lte_sweep_output_and_feedback_body(out));
			auto lte_layer_3_cell_search = std::make_shared<lte_cell_search_node>(*graph_, tbb::flow::serial, lte_processing_body(
				lte_processing_settings(config.lte_layer_3_collection_, config.lte_layer_3_decode_, config.lte_layer_3_general_)));
			auto lte_layer_3_decode = std::make_shared<lte_layer_3_decode_node>(*graph_, tbb::flow::serial, lte_processing_body(
				lte_processing_settings(config.lte_layer_3_collection_, config.lte_layer_3_decode_, config.lte_layer_3_general_), &is_cancelled_));
			auto lte_layer_3_output_feedback = std::make_shared<lte_output_and_feedback_node>(*graph_, tbb::flow::serial, lte_layer_3_output_and_feedback_body(out, config.lte_layer_3_decode_.minimum_collection_round_));

			auto collection_queue = std::make_shared<queue_node>(*graph_);
			auto limiter_queue = std::make_shared<tbb::flow::queue_node<tbb::flow::continue_msg>>(*graph_);

			start_node_->register_successor(*limiter);
			collection_queue->register_successor(*limiter);

			limiter->register_successor(*collection_manager_node_);
			limiter_queue->register_successor(limiter->decrement);

			tbb::flow::output_port<GSM_SWEEP_PORT>(*collection_manager_node_).register_successor(*gsm_sweep_cell_search);
			gsm_sweep_cell_search->register_successor(*gsm_sweep_output_feedback);
			tbb::flow::output_port<0>(*gsm_sweep_output_feedback).register_successor(*collection_queue);
			tbb::flow::output_port<1>(*gsm_sweep_output_feedback).register_successor(*limiter_queue);

			tbb::flow::output_port<GSM_LAYER3_PORT>(*collection_manager_node_).register_successor(*gsm_layer_3_cell_search);
			gsm_layer_3_cell_search->register_successor(*gsm_layer_3_decode);
			gsm_layer_3_decode->register_successor(*gsm_layer_3_output_feedback);
			tbb::flow::output_port<0>(*gsm_layer_3_output_feedback).register_successor(*collection_queue);
			tbb::flow::output_port<1>(*gsm_layer_3_output_feedback).register_successor(*limiter_queue);

			tbb::flow::output_port<UMTS_SWEEP_PORT>(*collection_manager_node_).register_successor(*umts_sweep_cell_search);
			umts_sweep_cell_search->register_successor(*umts_sweep_output_feedback);
			tbb::flow::output_port<0>(*umts_sweep_output_feedback).register_successor(*collection_queue);
			tbb::flow::output_port<1>(*umts_sweep_output_feedback).register_successor(*limiter_queue);

			tbb::flow::output_port<UMTS_LAYER3_PORT>(*collection_manager_node_).register_successor(*umts_layer_3_cell_search);
			umts_layer_3_cell_search->register_successor(*umts_layer_3_decode);
			umts_layer_3_decode->register_successor(*umts_layer_3_output_feedback);
			tbb::flow::output_port<0>(*umts_layer_3_output_feedback).register_successor(*collection_queue);
			tbb::flow::output_port<1>(*umts_layer_3_output_feedback).register_successor(*limiter_queue);

			tbb::flow::output_port<LTE_SWEEP_PORT>(*collection_manager_node_).register_successor(*lte_sweep_cell_search);
			lte_sweep_cell_search->register_successor(*lte_sweep_output_feedback);
			tbb::flow::output_port<0>(*lte_sweep_output_feedback).register_successor(*collection_queue);
			tbb::flow::output_port<1>(*lte_sweep_output_feedback).register_successor(*limiter_queue);

			tbb::flow::output_port<LTE_LAYER3_PORT>(*collection_manager_node_).register_successor(*lte_layer_3_cell_search);
			lte_layer_3_cell_search->register_successor(*lte_layer_3_decode);
			lte_layer_3_decode->register_successor(*lte_layer_3_output_feedback);
			tbb::flow::output_port<0>(*lte_layer_3_output_feedback).register_successor(*collection_queue);
			tbb::flow::output_port<1>(*lte_layer_3_output_feedback).register_successor(*limiter_queue);


			tbb::flow::output_port<LIMITER_PORT>(*collection_manager_node_).register_successor(*limiter_queue);

			nodes_.push_back(limiter);
			nodes_.push_back(limiter_queue);
			nodes_.push_back(collection_queue);
			nodes_.push_back(gsm_sweep_cell_search);
			nodes_.push_back(gsm_sweep_output_feedback);
			nodes_.push_back(gsm_layer_3_cell_search);
			nodes_.push_back(gsm_layer_3_decode);
			nodes_.push_back(gsm_layer_3_output_feedback);
			nodes_.push_back(umts_sweep_cell_search);
			nodes_.push_back(umts_sweep_output_feedback);
			nodes_.push_back(umts_layer_3_cell_search);
			nodes_.push_back(umts_layer_3_decode);
			nodes_.push_back(umts_layer_3_output_feedback);
			nodes_.push_back(lte_sweep_cell_search);
			nodes_.push_back(lte_sweep_output_feedback);
			nodes_.push_back(lte_layer_3_cell_search);
			nodes_.push_back(lte_layer_3_decode);
			nodes_.push_back(lte_layer_3_output_feedback);

			start_node_->activate();

			is_initialized_ = true;

			graph_->wait_for_all();
		}
		catch(const rf_phreaker::rf_phreaker_error &err) {
			delegate_sink::instance().log_error(err);
		}
		catch(const std::exception &err) {
			delegate_sink::instance().log_error(err.what(), generic_error_type, STD_EXCEPTION_ERROR);
		}
		catch(...) {
			delegate_sink::instance().log_error("An unknown error has occurred.", generic_error_type, UNKNOWN_ERROR);
		}
	}, sc, out, collection_info, config));
}

void processing_graph::wait()
{
	std::lock_guard<std::recursive_mutex> lock(mutex_);
	if(thread_ && thread_->joinable()) {
		thread_->join();
	}
}

void processing_graph::cancel()
{
	is_cancelled_ = true;
	std::lock_guard<std::recursive_mutex> lock(mutex_);
	if(thread_ && thread_->joinable()) {
		int count = 0;
		while(!is_initialized_) {
			std::this_thread::sleep_for(std::chrono::milliseconds(20));
			if(count++ > 500)
				throw processing_error("Unable to stop graph.");
		}
		graph_->root_task()->cancel_group_execution();
	}
}

void processing_graph::cancel_and_wait()
{
	std::lock_guard<std::recursive_mutex> lock(mutex_);
	cancel();
	wait();
	is_initialized_ = false;
}
