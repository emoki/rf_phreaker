#pragma once

#include <vector>
#include <stdint.h>
#include "boost/serialization/access.hpp"

namespace rf_phreaker {

class license
{
public:
	license(bool is_dummy) : version_(is_dummy ? dummy_version_ : -1) {}
	license() : version_(-1) {}
	int32_t version_;
	std::vector<uint8_t> bytes_;
	license& operator =(const license &lic)
	{
		version_ = lic.version_;
		bytes_ = lic.bytes_;
		return *this;
	}
	bool is_dummy_version() const { return version_ == dummy_version_; }

private:
	static const int32_t dummy_version_ = -100;
	friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive &ar, const unsigned int version)
	{
		ar & version_;
		ar & bytes_;
	}
};

}