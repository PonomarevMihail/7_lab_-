#pragma once
#include "Weather.h"
#include "json (3).hpp"
#include "Service.h"
class JsonService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};

