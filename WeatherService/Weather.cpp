#include "Weather.h"

Weather::Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds)
{
	setlocale(LC_ALL, "ru");
	if (lon < 0 or lat < 0 or windSpeed < 0 or clouds < 0) {
		throw exception("invalit data info");
	}
	else {
		this->city = city;
		this->clouds = clouds;
		this->lon = lon;
		this->lat = lat;
		this->temperature = temperature;
		this->weather = weather;
		this->windSpeed = windSpeed;
	}
}

void Weather::PrintWeatherInfo()
{
	setlocale(LC_ALL, "ru");
	cout << "������� �� ������� :" << endl;
	cout << "����� : " << this->city << endl;
	cout << "������� : " << this->lon << endl;
	cout << "������ : " << this->lat << endl;
	cout << "����������� : " << this->temperature << endl;
	cout << "������ : " << this->weather << endl;
	cout << "�������� ����� : " << this->windSpeed << endl;
	cout << "���������� : " << this->clouds << endl;

}
