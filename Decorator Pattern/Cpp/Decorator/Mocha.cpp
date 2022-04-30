#pragma once

#include "CondimentDecorator.cpp"

class Mocha : public CondimentDecorator {
public:
	Mocha(Beverage* beverage) {
		this->beverage = beverage;
	}

	string getDescription() {
		return beverage->getDescription() + " + Mocha";;
	}

	double cost() {
		return beverage->cost() + 0.20;
	}
};
