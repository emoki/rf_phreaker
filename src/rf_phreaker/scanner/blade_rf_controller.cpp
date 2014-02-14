#include "rf_phreaker/scanner/blade_rf_controller.h"
#include "rf_phreaker/common/exception_types.h"
#include "rf_phreaker/scanner/comm_blade_rf.h"
#include "rf_phreaker/scanner/bandwidth_conversion.h"
#include "rf_phreaker/scanner/lms_utilities.h"
#include "rf_phreaker/common/common_utility.h"
#include "rf_phreaker/scanner/scanner_blade_rf_impl.h"
#include "libbladeRF.h"

using namespace rf_phreaker;
using namespace rf_phreaker::scanner;
using rf_phreaker::scanner::scanner;

blade_rf_controller::blade_rf_controller(comm_type)
{}

blade_rf_controller::blade_rf_controller(blade_rf_controller &&c)
: comm_blade_rf_(std::move(c.comm_blade_rf_))
, scanner_blade_rf_(std::move(c.scanner_blade_rf_))
{}

blade_rf_controller::~blade_rf_controller()
{
	if(comm_blade_rf_.get())
		close_scanner();
}

std::vector<comm_info_ptr> blade_rf_controller::list_available_scanners()
{
	std::vector<comm_info_ptr> devices;
	bladerf_devinfo *dev_info = nullptr;

	int num_devices = bladerf_get_device_list(&dev_info);

	// We do not consider no blade devices connected to be an error here.
	if(num_devices != BLADERF_ERR_NODEV)
		check_blade_status(num_devices);

	for(int i = 0; i < num_devices; i++) {
		devices.push_back(comm_info_ptr(new comm_blade_rf(dev_info[i])));
	}

	bladerf_free_device_list(dev_info);

	return devices;
}

void blade_rf_controller::open_scanner(const scanner_id_type &id)
{
	std::string open_str = "libusb:serial=" + id;

	bladerf *blade_rf;

	check_blade_status(bladerf_open(&blade_rf, open_str.c_str()));

	bladerf_devinfo dev_info;

	check_blade_status(bladerf_get_devinfo(blade_rf, &dev_info));

	comm_blade_rf_.reset(new comm_blade_rf(dev_info, blade_rf));

	// Reset LMS.
	//check_blade_status(bladerf_lms_write(comm_blade_rf_->blade_rf(), 0x05, 0x12));
	//check_blade_status(bladerf_lms_write(comm_blade_rf_->blade_rf(), 0x05, 0x32));

	refresh_scanner_info();
}

void blade_rf_controller::close_scanner()
{
	bladerf_close(comm_blade_rf_->blade_rf());
	comm_blade_rf_.reset();
}

void blade_rf_controller::do_initial_scanner_config()
{
	check_blade_status(bladerf_enable_module(comm_blade_rf_->blade_rf(),
		BLADERF_MODULE_RX,
		true));
	
	check_blade_status(bladerf_enable_module(comm_blade_rf_->blade_rf(),
		BLADERF_MODULE_TX,
		false));

	// NOTE - Do not perform any calibrations at this time.
	// Is this done inside bladeRF?  If not, this can be done once and 
	// registry values can be saved in hw and loaded next init phase.

	//check_blade_status(bladerf_calibrate_dc(comm_blade_rf_->blade_rf(), 
	//	BLADERF_DC_CAL_LPF_TUNING));


	//check_blade_status(bladerf_calibrate_dc(comm_blade_rf_->blade_rf(), 
	//	BLADERF_DC_CAL_RX_LPF));

	//check_blade_status(bladerf_calibrate_dc(comm_blade_rf_->blade_rf(), 
	//	BLADERF_DC_CAL_RXVGA2));

	//check_blade_status(bladerf_set_sampling(comm_blade_rf_->blade_rf(),
	//	bladerf_sampling::BLADERF_SAMPLING_INTERNAL));

	//check_blade_status(bladerf_set_transfer_timeout(comm_blade_rf_->blade_rf(), BLADERF_MODULE_RX, 5000));

	//bladerf_log_set_verbosity(BLADERF_LOG_LEVEL_VERBOSE);

	// construction of licensing
	// construction of calibration table

}

//void blade_rf_controller::config_scanner_for_collection(std::vector<frequency_type> &)
//{
//	// Currently vtune value is calculated on the fly.
//
//	// Check band licensing
//	// find initial gain values
//	// handle vtune on all freqs we will be collecting
//}

void blade_rf_controller::update_dds()
{}

const rf_phreaker::scanner::scanner* blade_rf_controller::get_scanner()
{
	refresh_scanner_info();

	return scanner_blade_rf_.get();
}

const scanner_blade_rf* blade_rf_controller::get_scanner_blade_rf()
{
	refresh_scanner_info();

	return scanner_blade_rf_.get();
}

void blade_rf_controller::refresh_scanner_info()
{
	scanner_blade_rf_impl blade;

	auto comm_blade = comm_blade_rf_->blade_rf();

	check_blade_status(bladerf_get_devinfo(comm_blade, &blade.dev_info_));

	blade.usb_speed_ = static_cast<bladerf_dev_speed>(check_blade_status(bladerf_device_speed(comm_blade_rf_->blade_rf())));

	// bladerf_stats is not currently supported.  FPGA needs to support behavior.
	//check_blade_status(bladerf_stats(comm_blade, &blade.stats_));
	//blade.stats_.rx_overruns = 0;
	//blade.stats_.rx_throughput = 0;
	//blade.stats_.tx_throughput = 0;
	//blade.stats_.tx_underruns = 0;

	bladerf_version(&blade.blade_rf_version_);

	check_blade_status(bladerf_fw_version(comm_blade, &blade.firmware_version_));

	check_blade_status(bladerf_fpga_version(comm_blade, &blade.fpga_version_));

	check_blade_status(bladerf_get_vctcxo_trim(comm_blade, &blade.vctcxo_trim_));

	check_blade_status(bladerf_get_transfer_timeout(comm_blade, BLADERF_MODULE_RX, &blade.rx_timeout_));

	scanner_blade_rf_ = std::make_shared<scanner_blade_rf>(blade);
}

gps blade_rf_controller::get_gps_data()
{
	return gps();
}

measurement_info blade_rf_controller::get_rf_data_use_auto_gain(frequency_type frequency, time_type time_ns, bandwidth_type bandwidth, frequency_type sampling_rate)
{
	auto gain = set_auto_gain(frequency, bandwidth);

	return get_rf_data(frequency, time_ns, bandwidth, gain, sampling_rate);
}

gain_type blade_rf_controller::set_auto_gain(frequency_type freq, bandwidth_type bandwidth, time_type time_ns,
										frequency_type sampling_rate)
{
	// Use lowest sampling rate because we only care about the Max ADC.
	if(time_ns == 0)
		time_ns = 5000000;

	sampling_rate = 1920000;

	gain_type gain;

	auto data = get_rf_data(freq, time_ns, bandwidth, gain, sampling_rate);

	return gain_manager_.calculate_gain(data);
}

measurement_info blade_rf_controller::get_rf_data(frequency_type frequency, time_type time_ns, bandwidth_type bandwidth, const gain_type &gain, frequency_type sampling_rate)
{
	int throw_away_ns = 3000000;

	// Per Nyquist a signal must be sampled at a rate greater than twice it's maximum frequency component.  Thus
	// once converted to baseband the highest pertinent frequency component will be 1/2 the bandwidth so our sampling 
	// rate should be a little greater than our bandwidth.
	if(sampling_rate == 0)
		sampling_rate = static_cast<frequency_type>(bandwidth * 1.2);

	check_blade_status(bladerf_set_lna_gain(comm_blade_rf_->blade_rf(), convert(gain.lna_gain_)));

	check_blade_status(bladerf_set_rxvga1(comm_blade_rf_->blade_rf(), gain.rxvga1_));

	check_blade_status(bladerf_set_rxvga2(comm_blade_rf_->blade_rf(), gain.rxvga2_));

	// Do we need to allow access to lpf_mode?

	unsigned int blade_sampling_rate = 0;
	unsigned int blade_bandwidth = 0;

	check_blade_status(bladerf_set_sample_rate(comm_blade_rf_->blade_rf(), BLADERF_MODULE_RX,
		sampling_rate, &blade_sampling_rate));

	check_blade_status(bladerf_set_bandwidth(comm_blade_rf_->blade_rf(), BLADERF_MODULE_RX,
		bandwidth, &blade_bandwidth));

	check_blade_status(bladerf_set_frequency(comm_blade_rf_->blade_rf(), BLADERF_MODULE_RX,
		frequency));

	check_blade_status(bladerf_set_lpf_mode(comm_blade_rf_->blade_rf(), BLADERF_MODULE_RX,
		BLADERF_LPF_NORMAL));

	int num_samples = time_samples_conversion_.convert_to_samples(time_ns/* + throw_away_ns*/, blade_sampling_rate);

	// BladeRF only accepts data num_samples that are a multiple of 1024.
	num_samples += 1024 - num_samples % 1024;

	const auto return_bytes = num_samples * 2 * sizeof(int16_t);

	aligned_buffer_.align_array(return_bytes);
	auto aligned_buffer = aligned_buffer_.get_aligned_array();

	bladerf_metadata metadata;

	check_blade_status(bladerf_rx(comm_blade_rf_->blade_rf(), BLADERF_FORMAT_SC16_Q11,
		aligned_buffer, num_samples, &metadata));

	measurement_info data(num_samples, frequency, blade_bandwidth, blade_sampling_rate,
		gain);

	for(int i = 0; i < num_samples * 2; ++i)
		sign_extend_12_bits(reinterpret_cast<int16_t*>(aligned_buffer)[i]);

	ipp_helper::check_status(ippsConvert_16s32f((Ipp16s*)&(*aligned_buffer_.get_aligned_array()), 
		(Ipp32f*)data.get_iq().get(), data.get_iq().length() * 2));

	return data;
}

int blade_rf_controller::check_blade_status(int return_status)
{
	if(return_status < 0)
		throw blade_rf_error(bladerf_strerror(return_status), return_status);
	//switch(return_status) {
	//	case BLADERF_ERR_UNEXPECTED:
	//		break;
	//	case BLADERF_ERR_RANGE:
	//		break;
	//	case BLADERF_ERR_INVAL:
	//		break;
	//	case BLADERF_ERR_MEM:
	//		break;
	//	case BLADERF_ERR_IO:
	//		break;
	//	case BLADERF_ERR_TIMEOUT:
	//		break;
	//	case BLADERF_ERR_NODEV:
	//		break;
	//	case BLADERF_ERR_UNSUPPORTED:
	//		break;
	//	case BLADERF_ERR_MISALIGNED:
	//		break;
	//	case BLADERF_ERR_CHECKSUM:
	//		break;
	//	default:
	//	}
	//}
	return return_status;
}


////////////////////////////////////////////////////////////
//struct test_data
//{
//	void                **buffers;      /* Transmit buffers */
//	size_t              num_buffers;    /* Number of buffers */
//	size_t              samples_per_buffer; /* Number of samples per buffer */
//	unsigned int        idx;            /* The next one that needs to go out */
//	bladerf_module      module;         /* Direction */
//	uint32_t             samples_left;   /* Number of samples left */
//};
//static bool shutdown_stream = false;
//void *stream_callback(struct bladerf *dev, struct bladerf_stream *stream,
//struct bladerf_metadata *metadata, void *samples,
//	size_t num_samples, void *user_data)
//{
//	struct test_data *my_data = (struct test_data *)user_data;
//
//	my_data->samples_left -= num_samples;
//	if(my_data->samples_left <= 0)
//		shutdown_stream = true;
//
//	if(shutdown_stream) {
//		return NULL;
//	}
//	else {
//		void *rv = my_data->buffers[my_data->idx];
//		my_data->idx = (my_data->idx + 1) % my_data->num_buffers;
//		return rv;
//	}
//}
////////////////////////////////////////////////////////////
//test_data td;
//td.module = BLADERF_MODULE_RX;
//td.idx = 0;
//td.num_buffers = 12;
//td.samples_per_buffer = num_samples / td.num_buffers + 1;
//td.samples_per_buffer += 1024 - td.samples_per_buffer % 1024;
//td.samples_left = td.samples_per_buffer * td.num_buffers;

//struct bladerf_stream *stream;

//int status = bladerf_init_stream(
//	&stream,
//	comm_blade_rf_->blade_rf(),
//	stream_callback,
//	&td.buffers,
//	td.num_buffers,
//	BLADERF_FORMAT_SC16_Q11,
//	td.samples_per_buffer,
//	td.num_buffers,
//	&td
//	);
//
//status = bladerf_stream(stream, td.module);

//bladerf_deinit_stream(stream);
////////////////////////////////////////////////////////////
