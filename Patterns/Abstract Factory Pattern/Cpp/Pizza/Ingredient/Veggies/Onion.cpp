#pragma once

#include "./Veggies.cpp"

class Onion : public Veggies {
public:
    string getName() override {
        return "잘게 조각낸 양파";
    }
};