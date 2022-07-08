#pragma once

#include <iostream>

#include "./Duck.cpp"

using namespace std;

class MallardDuck : public Duck {
    void quack() override {
        cout << "꽥" << '\n';
    }

    void fly() override {
        cout << "날고 있어요" << '\n';
    }
};