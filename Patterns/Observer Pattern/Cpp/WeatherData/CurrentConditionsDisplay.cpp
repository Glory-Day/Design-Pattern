#include <iostream>
#include "Observer/IObserver.cpp"
#include "Observer/IDisplayElement.cpp"
#include "WeatherData.cpp"

using namespace std;

class CurrentConditionsDisplay : public IObserver, IDisplayElement {
	float temperature;
	float humidity;
	WeatherData* weatherData;

public:
	CurrentConditionsDisplay(WeatherData* weatherData) {
		this->weatherData = weatherData;
		this->weatherData->registerObserver(this);
	}

	void update(float temperature, float humidity, float pressure) {
		this->temperature = temperature;
		this->humidity = humidity;
		display();
	}

	void display() {
		cout << "현재 상태: 온도 " << this->temperature << "F, 습도 " << this->humidity << "%\n";
	}
};
