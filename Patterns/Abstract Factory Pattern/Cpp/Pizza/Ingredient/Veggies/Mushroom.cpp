#pragma once

#include "./Veggies.cpp"

class Mushroom : public Veggies {
public:
    string getName() override {
        return "잘게 조각낸 버섯";
    }
};