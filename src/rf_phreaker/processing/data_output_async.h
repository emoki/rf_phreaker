#pragma once
#include "rf_phreaker/processing/data_output.h"
#include "rf_phreaker/common/concurrent.h"

namespace rf_phreaker { namespace processing {



class data_output_async
{
public:
	data_output_async()
	{}

	template<typename Data>
	std::future<void> output(Data data)
	{
		return out_([=](data_output out) {
			out.output(data);
		});
	}

	//template<typename Data>
	//void output(std::vector<Data> data)
	//{
	//	out_([=](data_output out) {
	//		out.output(data);
	//	});
	//}

	std::future<void> output_umts_sweep(basic_data data)
	{
		return out_([=](data_output out) {
			out.output_umts_sweep(data);
		});
	}

	std::future<void> output_lte_sweep(basic_data data)
	{
		return out_([=](data_output out) {
			out.output_lte_sweep(data);
		});
	}

	std::future<void> set_standard_output(bool set_out)
	{
		return out_([=](data_output out) {
			out.set_standard_output(set_out);
		});
	}

	template<typename Func>
	std::future<void> connect_hardware(Func &f)
	{
		return out_([=](data_output out) {
			out.connect_hardware(f);
		});
	}

	template<typename Func>
	std::future<void> connect_gps(Func &f)
	{
		return out_([=](data_output out) {
			out.connect_gps(f);
		});
	}

	template<typename Func>
	std::future<void> connect_umts_layer_3(Func &f)
	{
		return out_([=](data_output out) {
			out.connect_umts_layer_3(f);
		});
	}

	template<typename Func>
	std::future<void> connect_lte_layer_3(Func &f)
	{
		return out_([=](data_output out) {
			out.connect_lte_layer_3(f);
		});
	}

	template<typename Func>
	std::future<void> connect_umts_sweep(Func &f)
	{
		return out_([=](data_output out) {
			out.connect_umts_sweep(f);
		});
	}

	template<typename Func>
	std::future<void> connect_lte_sweep(Func &f)
	{
		return out_([=](data_output out) {
			out.connect_lte_sweep(f);
		});
	}

private:
	concurrent<data_output> out_;
};





}}