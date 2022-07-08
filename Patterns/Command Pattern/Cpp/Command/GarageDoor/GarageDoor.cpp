#pragma once

#include <iostream>
#include <string>

using namespace std;

class GarageDoor {
private:
    int state;

public:
    const int ON = 1;
    const int OFF = 0;

    GarageDoor() : state{OFF} {}

    void up() {
        state = ON;
        cout << "차고 문이 올라갑니다.\n"; 
    }

    void down() {
        state = OFF;
        cout << "차고의 문이 내려갑니다.\n"; 
    }

    void stop() { 
        cout << "차고의 문이 멈췄습니다.\n"; 
    }

    void lightOn() { 
        cout << "차고의 조명이 켜졌습니다.\n"; 
    }

    void lightOff() { 
        cout << "차고의 조명이 꺼졌습니다.\n"; 
    }

    int getState() { return state; }
};