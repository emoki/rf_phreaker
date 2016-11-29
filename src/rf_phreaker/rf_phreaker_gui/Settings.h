#pragma once
#include <QSettings>
#include <QList>
#include <QString>
#include "rf_phreaker/rf_phreaker_gui/Serialization.h"
#include "rf_phreaker/rf_phreaker_gui/CollectionInfo.h"
#include "marble/geodata/data/GeoDataCoordinates.h"

//namespace rf_phreaker { namespace gui {

static const QString api_output_key("api_output");
static const QString last_known_coordinates_key("last_known_coordinates");
static const QString rpf_track_min_distance_key("rpf_track_min_distance");
static const QString theme_primary_color_key("theme_primary_color");
static const QString theme_accent_color_key("theme_accent_color");
static const QString theme_tab_highlight_color_key("theme_tab_highlight_color");

class Settings {
public:
	bool api_output_;
	double rpf_track_min_distance_;
	QString theme_primary_color_;
	QString theme_accent_color_;
	QString theme_tab_highlight_color_;
};

class SettingsIO {
public:
	SettingsIO()
	    : qs_(QSettings::IniFormat, QSettings::UserScope, "rf_phreaker", "gui") {}

	void readSettings(Settings &settings) {
		settings.api_output_ = qs_.value(api_output_key, false).toBool();
		settings.rpf_track_min_distance_ = qs_.value(rpf_track_min_distance_key, 3).toDouble();
		settings.theme_primary_color_ = qs_.value(theme_primary_color_key, "indigo").toString();
		settings.theme_accent_color_ = qs_.value(theme_accent_color_key, "green").toString();
		settings.theme_tab_highlight_color_ = qs_.value(theme_tab_highlight_color_key, "white").toString();
	}

	Marble::GeoDataCoordinates readLastKnownCoordinate() {
		bool success = false;
		Marble::GeoDataCoordinates coordinate;
		auto s = qs_.value(last_known_coordinates_key, "").toString();
		coordinate = Marble::GeoDataCoordinates::fromString(s, success);
		if(!success) {
			coordinate.set(74.0059, 40.7128, 0);
		}
		return coordinate;
	}

	QList<CollectionInfo*> readScanList(QObject *parent) {
		QList<CollectionInfo*> list;
		readCollectionInfoList(list, "scan_list", parent);
		return list;
	}

	void readCollectionInfoList(QList<CollectionInfo*> &list, const QString &descrip, QObject *parent) {
		auto size = qs_.beginReadArray(descrip);
		for(auto i = 0; i < size; ++i) {
			qs_.setArrayIndex(i);
			auto low = qs_.value("channel_freq_low").value<rf_phreaker::channel_freq>();
			auto high = qs_.value("channel_freq_high").value<rf_phreaker::channel_freq>();
			auto tech = (ApiTypes::Tech)qs_.value("tech").value<ApiTypes::Tech>();
			list.append(new CollectionInfo(low, high, tech, parent));
		}
		qs_.endArray();
	}

	QStringList readMarbleLayers() {
		return qs_.value("previous_marble_layers").toStringList();
	}

	void writeSettings(const Settings &settings) {
		qs_.setValue(api_output_key, settings.api_output_);
		qs_.setValue(rpf_track_min_distance_key, settings.rpf_track_min_distance_);
		qs_.setValue(theme_primary_color_key, settings.theme_primary_color_);
		qs_.setValue(theme_accent_color_key, settings.theme_accent_color_);
		qs_.setValue(theme_tab_highlight_color_key, settings.theme_tab_highlight_color_);
	}

	void writeLastKnownCoordinate(const Marble::GeoDataCoordinates &coordinate) {
		auto s = coordinate.toString(Marble::GeoDataCoordinates::Notation::Decimal);
		qs_.setValue(last_known_coordinates_key, s);
	}

	void writeScanList(const QList<CollectionInfo*> &list) {
		writeCollectionInfoList(list, "scan_list");
	}

	void writeCollectionInfoList(const QList<CollectionInfo*> &list, const QString &descrip) {
		qs_.beginWriteArray(descrip);
		int i = 0;
		for(const auto &j : list) {
			qs_.setArrayIndex(i++);
			qs_.setValue("channel_freq_low", QVariant::fromValue(j->channelFreqLow()->channelFreq()));
			qs_.setValue("channel_freq_high", QVariant::fromValue(j->channelFreqHigh()->channelFreq()));
			qs_.setValue("tech", QVariant::fromValue(j->channelFreqLow()->tech()));
		}
		qs_.endArray();

	}

	void writeMarbleLayers(const QStringList &list) {
		qs_.setValue("previous_marble_layers", list);
	}

private:
	QSettings qs_;
};



//}}
