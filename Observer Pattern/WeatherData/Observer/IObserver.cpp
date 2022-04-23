#pragma once

#define interface class

interface IObserver {
public:
	virtual void update(float temp, float humidity, float pressure) = 0;
};
