#pragma once

#include <iostream>

#define interface class

using namespace std;

interface CaffeineBeverageWithHook {
public:
    void prepareRecipe() {
        boilWater();
        brew();
        pourInCup();
        if (customerWantsCondiments()) addCondiments();
    }

    virtual void brew() = 0;

    virtual void addCondiments() = 0;

    virtual bool customerWantsCondiments() {
        return true;
    }

    void boilWater() {
        cout << "물 끓이는 중\n";
    }

    void pourInCup() {
        cout << "컵에 따르는 중\n";
    }
};