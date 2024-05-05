#pragma once
#include "Service.h"
#include "Weather.h"
#include "../WeatherService/pugixml.hpp"

class XmlService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};

