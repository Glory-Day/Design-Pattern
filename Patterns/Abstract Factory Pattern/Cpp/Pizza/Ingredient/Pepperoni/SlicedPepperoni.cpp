#pragma once

#include "./Pepperoni.cpp"

class SlicedPepperoni : public Pepperoni {
public:
    string getName() override {
        return "얇게 썬 페페로니";
    }
};