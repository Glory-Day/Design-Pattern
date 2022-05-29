#pragma once

#include <iostream>

#include "./Turkey.cpp"

using namespace std;

class WildTurkey : public Turkey {
public:
    void gobble() override {
        cout << "골골" << '\n';
    }

    void fly() override {
        cout << "짧은 거리를 날고 있어요" << '\n';
    }
};