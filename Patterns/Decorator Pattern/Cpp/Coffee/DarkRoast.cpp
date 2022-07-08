#pragma once

#include "Beverage.cpp"

class DarkRoast : public Beverage {
public:
    DarkRoast() {
        description = "Dark Roast Coffee";
    }

    double cost() {
        return 0.99;
    }
};