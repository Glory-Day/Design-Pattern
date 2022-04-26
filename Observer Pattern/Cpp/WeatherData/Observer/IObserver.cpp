#pragma once

#define interface class

interface IObserver {
public:
	virtual void update(float temperature, float humidity, float pressure) = 0;
};
