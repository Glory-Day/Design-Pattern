#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "./Ingredient/Dough/Dough.cpp"
#include "./Ingredient/Cheese/Cheese.cpp"
#include "./Ingredient/Sauce/Sauce.cpp"
#include "./Ingredient/Pepperoni/Pepperoni.cpp"
#include "./Ingredient/Clams/Clams.cpp"
#include "./Ingredient/Veggies/Veggies.cpp"

using namespace std;

class Pizza {
public:
    string name;

    Dough* dough;
    Sauce* sauce;
    Cheese* cheese;
    Pepperoni* pepperoni;
    Clams* clams;
    vector<Veggies*> veggies;

    virtual void prepare() = 0;

    void bake() {
        cout << "175도에서 25분 간 굽기\n";
    }

    void cut() {
        cout << "피자를 사선으로 자르기\n";
    }

    void box() {
        cout << "상자에 피자 담기\n";
    }

    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return name;
    }
};