#pragma once

#include <vector>
#include "Observer/ISubject.cpp"
#include "Observer/IObserver.cpp"

using namespace std;

class WeatherData : public ISubject {
	vector<IObserver*> observers;
	float temperature;
	float humidity;
	float pressure;

public:
	WeatherData() {
		observers = vector<IObserver*>();
	}

	void registerObserver(IObserver* o) {
		observers.push_back(o);
	}

	void removeObserver(IObserver* o) {
		observers.pop_back();
	}

	void notifyObservers() {
		for (IObserver* observer: observers) {
			observer->update(this->temperature, this->humidity, this->pressure);
		}
	}

	void measurementsChanged() {
		notifyObservers();
	}

	void setMeasurements(float temperature, float humidity, float pressure) {
		this->temperature = temperature;
		this->humidity = humidity;
		this->pressure = pressure;

		measurementsChanged();
	}

	// etc methods
};
