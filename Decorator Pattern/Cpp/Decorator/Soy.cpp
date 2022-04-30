#pragma once

#include "CondimentDecorator.cpp"

class Soy : public CondimentDecorator {
public:
    Soy(Beverage* beverage) {
        this->beverage = beverage;
    }

    string getDescription() {
        return beverage->getDescription() + " + Soy";
    }

    double cost() {
        return beverage->cost() + 0.15;
    }
};