#pragma once

#include <iostream>
#include <string>

using namespace std;

class CailingFan {
private:
    string location;
    int state;

public:
    const int HIGH = 3;
    const int MEDIUM = 2;
    const int LOW = 1;
    const int OFF = 0;

    CailingFan(string location) : location{location}, state{OFF} {}

    void setHigh() { 
        state = HIGH;
        cout << location << " 선풍기 세기를 강으로 설정합니다.\n";
    }

    void setMedium() {
        state = MEDIUM; 
        cout << location << " 선풍기 세기를 중으로 설정합니다.\n";
    }

    void setLow() { 
        state = LOW;
        cout << location << " 선풍기 세기를 약으로 설정합니다.\n"; 
    }

    void off() {
        state = OFF;
        cout << location << " 선풍기가 꺼졌습니다.\n"; 
    }

    int getState() { return state; }
};