#pragma once

#include "./Veggies.cpp"

class Garlic : public Veggies {
public:
    string getName() override {
        return "잘게 조각낸 마늘";
    }
};