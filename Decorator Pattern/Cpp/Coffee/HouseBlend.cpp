#pragma once

#include "Beverage.cpp"

class HouseBlend : public Beverage {
public:
	HouseBlend() {
		description = "House Blend Coffee";
	}

	double cost() {
		return 0.89;
	}
};
