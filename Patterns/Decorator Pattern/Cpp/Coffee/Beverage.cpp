#pragma once

#include <string>

using namespace std;

class Beverage {
public:
	string description = "No Title";

	virtual string getDescription() {
		return description;
	}

	virtual double cost() = 0;
};
