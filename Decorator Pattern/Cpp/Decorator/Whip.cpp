#pragma once

#include "CondimentDecorator.cpp"

class Whip : public CondimentDecorator {
public:
    Whip(Beverage* beverage) {
        this->beverage = beverage;
    }

    string getDescription() {
        return beverage->getDescription() + " + Whip";
    }

    double cost() {
        return beverage->cost() + 0.10;
    }
};