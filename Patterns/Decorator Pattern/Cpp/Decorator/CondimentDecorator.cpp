#pragma once

#include "../Coffee/Beverage.cpp"

class CondimentDecorator : public Beverage {
public:
	Beverage* beverage;

	virtual string getDescription() = 0;
};
