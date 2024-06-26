#pragma once
#include <QDebug>
#include <QEvent>
#include "rf_phreaker/rf_phreaker_gui/Utility.h"
#include "rf_phreaker/rf_phreaker_api/rf_phreaker_api.h"
#include "rf_phreaker/rf_phreaker_gui/ApiMessage.h"
#include "rf_phreaker/rf_phreaker_gui/RpDevice.h"
#include "rf_phreaker/rf_phreaker_gui/Gps.h"
#include "rf_phreaker/rf_phreaker_gui/Gsm.h"
#include "rf_phreaker/rf_phreaker_gui/Wcdma.h"
#include "rf_phreaker/rf_phreaker_gui/Lte.h"
#include "rf_phreaker/rf_phreaker_gui/Sweep.h"

//namespace rf_phreaker { namespace gui {


template<typename T>
class TypeInterface {
public:
	static QEvent::Type getType() {
		static auto t = QEvent::registerEventType();
		return static_cast<QEvent::Type>(t);
	}
};

// Thread worker events /////////////
class ExitEvent : public QEvent, public TypeInterface<ExitEvent> {
public:
	ExitEvent() : QEvent(getType()) {}
};

class InitializeApiEvent : public QEvent, public TypeInterface<InitializeApiEvent> {
public:
	InitializeApiEvent(rp_callbacks *rp_callbacks) : QEvent(getType()), callbacks_(rp_callbacks) {}
	rp_callbacks *callbacks_;
};

class ApiInitializedEvent : public QEvent, public TypeInterface<ApiInitializedEvent> {
public:
	ApiInitializedEvent() : QEvent(getType()) {}
};

class CleanUpApiEvent : public QEvent, public TypeInterface<CleanUpApiEvent> {
public:
	CleanUpApiEvent() : QEvent(getType()) {}
};

class ApiCleanedUpEvent : public QEvent, public TypeInterface<ApiCleanedUpEvent> {
public:
	ApiCleanedUpEvent() : QEvent(getType()) {}
};

class ListDevicesEvent : public QEvent, public TypeInterface<ListDevicesEvent> {
public:
	ListDevicesEvent() : QEvent(getType()) {}
};

class AvailableDevicesEvent : public QEvent, public TypeInterface<AvailableDevicesEvent> {
public:
	AvailableDevicesEvent(QStringList deviceList) : QEvent(getType()), deviceList_(deviceList) {}
	QStringList deviceList() { return deviceList_; }
private:
	QStringList deviceList_;
};

class ConnectDeviceEvent : public QEvent, public TypeInterface<ConnectDeviceEvent> {
public:
	ConnectDeviceEvent(QString serial) : QEvent(getType()), serial_(serial) {}
	QString serial() { return serial_; }
private:
	QString serial_;
};

class DisconnectDeviceEvent : public QEvent, public TypeInterface<DisconnectDeviceEvent> {
public:
	DisconnectDeviceEvent() : QEvent(getType()) {}
};

class StartCollectionEvent : public QEvent, public TypeInterface<StartCollectionEvent> {
public:
	StartCollectionEvent(const api_storage<rp_operating_band, rp_operating_band_group> &sweep,
					const api_storage<rp_iq_data_spec, rp_iq_data_spec_group> &iq,
					const api_storage<rp_power_spectrum_spec, rp_power_spectrum_spec_group> &spec,
					const QMap<ApiTypes::Tech, api_storage<rp_frequency_band, rp_frequency_band_group>> &techs)
		: QEvent(getType())
		, sweep_(sweep)
		, iq_(iq)
		, spec_(spec)
		, techs_(techs)
		
	{}

	api_storage<rp_operating_band, rp_operating_band_group>& sweep() { return sweep_; }
	api_storage<rp_iq_data_spec, rp_iq_data_spec_group>& iq() { return iq_; }
	api_storage<rp_power_spectrum_spec, rp_power_spectrum_spec_group>& spec() { return spec_; }
	QMap<ApiTypes::Tech, api_storage<rp_frequency_band, rp_frequency_band_group>>& techs() { return techs_; }

private:
	api_storage<rp_operating_band, rp_operating_band_group> sweep_;
	api_storage<rp_iq_data_spec, rp_iq_data_spec_group> iq_;
	api_storage<rp_power_spectrum_spec, rp_power_spectrum_spec_group> spec_;
	QMap<ApiTypes::Tech, api_storage<rp_frequency_band, rp_frequency_band_group>> techs_;
};

class CollectionStartedEvent : public QEvent, public TypeInterface<CollectionStartedEvent> {
public:
	CollectionStartedEvent() : QEvent(getType()) {}
};

class StopCollectionEvent : public QEvent, public TypeInterface<StopCollectionEvent> {
public:
	StopCollectionEvent() : QEvent(getType()) {}
};

class CollectionStoppedEvent : public QEvent, public TypeInterface<CollectionStoppedEvent> {
public:
	CollectionStoppedEvent() : QEvent(getType()) {}
};

class DeviceDisconnectedEvent : public QEvent, public TypeInterface<DeviceDisconnectedEvent> {
public:
	DeviceDisconnectedEvent() : QEvent(getType()) {}
};



class ProtobufUpdateEvent : public QEvent, public TypeInterface<ProtobufUpdateEvent> {
public:
	ProtobufUpdateEvent(const int8_t *google_protocol_buffer_stream, int32_t size) : QEvent(getType()), 
		data_((const char*)google_protocol_buffer_stream, size) {}
	QByteArray& data() { return data_; }
private:
	QByteArray data_;
};

class LogUpdateEvent : public QEvent, public TypeInterface<LogUpdateEvent> {
public:
	LogUpdateEvent(const QString &msg) : QEvent(getType()), msg_(msg) {}
	QString& msg() { return msg_; }
private:
	QString msg_;
};

class MessageUpdateEvent : public QEvent, public TypeInterface<MessageUpdateEvent> {
public:
	MessageUpdateEvent(rp_status status, const QString &mainDescription, const QString &details) 
		: QEvent(getType())
		, msg_(status, mainDescription, details)
	{}
	const ApiMessage& msg() const { return msg_; }
	rp_status status() const { return msg_.status_; }
	const QString& statusStr() const { return msg_.statusStr_; }
	const QString& mainDescription() const { return msg_.mainDescription_; }
	const QString& details() const { return msg_.details_; }
private:
	ApiMessage msg_;
};

class DeviceUpdateEvent : public QEvent, public TypeInterface<DeviceUpdateEvent> {
public:
	DeviceUpdateEvent(const rp_device_info &device) : QEvent(getType()), device_(device) {}
	rp_device_info& device() { return device_; }
private:
	rp_device_info device_;
};

class GpsUpdateEvent : public QEvent, public TypeInterface<GpsUpdateEvent> {
public:
	GpsUpdateEvent(const rp_gps &gps) : QEvent(getType()), gps_(gps) {}
	rp_gps& gps() { return gps_; }
private:
	rp_gps gps_;
};

class WcdmaUpdateEvent : public QEvent, public TypeInterface<WcdmaUpdateEvent> {
public:
	WcdmaUpdateEvent(const rp_base *base, const rp_wcdma *wcdma, int num_wcdma)
		: QEvent(getType())
		, base_(*base) {
		for(int i = 0; i < num_wcdma; ++i)
			list_.push_back(wcdma[i]);
	}
	rp_base& base() { return base_; }
	QList<rp_wcdma>& wcdmaList() { return list_; }
private:
	rp_base base_;
	QList<rp_wcdma> list_;
};

class LteUpdateEvent : public QEvent, public TypeInterface<LteUpdateEvent> {
public:
	LteUpdateEvent(const rp_base *base, const rp_lte *lte, int num_lte)
		: QEvent(getType())
		, base_(*base) {
		for(int i = 0; i < num_lte; ++i)
			list_.push_back(lte[i]);
	}
	rp_base& base() { return base_; }
	QList<rp_lte>& lteList() { return list_; }
private:
	rp_base base_;
	QList<rp_lte> list_;
};

class CloseCollectionFileEvent : public QEvent, public TypeInterface<CloseCollectionFileEvent> {
public:
    CloseCollectionFileEvent() : QEvent(getType()) {}
};

class ConvertRpfEvent : public QEvent, public TypeInterface<ConvertRpfEvent> {
public:
    ConvertRpfEvent() : QEvent(getType()) {}
};


//}}
