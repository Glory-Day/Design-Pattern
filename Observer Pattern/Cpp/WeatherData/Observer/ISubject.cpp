#pragma once

#include "IObserver.cpp"

#define interface class

interface ISubject {
public:
	virtual void registerObserver(IObserver* o) = 0;
	virtual void removeObserver(IObserver* o) = 0;
	virtual void notifyObservers() = 0;
};
