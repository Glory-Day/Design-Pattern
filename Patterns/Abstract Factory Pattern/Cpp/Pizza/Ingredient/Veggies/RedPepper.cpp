#pragma once

#include "./Veggies.cpp"

class RedPepper : public Veggies {
public:
    string getName() override {
        return "잘게 조각낸 적후추";
    }
};