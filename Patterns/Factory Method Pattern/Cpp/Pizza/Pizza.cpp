#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pizza {
public:
    string name;
    string dough;
    string sauce;

    vector<string> toppings;

    void prepare() {
        cout << "준비 중: " << name << '\n';
        cout << "도우를 돌리는 중...\n";
        cout << "소스를 뿌리는 중...\n";
        cout << "토핑을 올리는 중:\n";
        for (string& topping: toppings) {
            cout << topping; 
        }
    }

    virtual void bake() {
        cout << "175도에서 25분 간 굽기\n";
    }

    virtual void cut() {
        cout << "피자를 사선으로 자르기\n";
    }

    virtual void box() {
        cout << "상자에 피자 담기\n";
    }

    virtual string getName() {
        return name;
    }
};