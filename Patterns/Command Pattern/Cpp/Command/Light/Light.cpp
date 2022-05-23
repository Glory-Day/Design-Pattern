#pragma once

#include <iostream>
#include <string>

using namespace std;

class Light {
private:
    string location;
    int state;

public:
    const int ON = 1;
    const int OFF = 0;

    Light(string location) : location{location}, state{OFF} {}

    void on() {
        state = ON;
        cout << location << " 조명이 켜졌습니다.\n"; 
    }

    void off() { 
        state = OFF;
        cout << location << " 조명이 꺼졌습니다.\n"; 
    }

    int getState() { return state; }
};