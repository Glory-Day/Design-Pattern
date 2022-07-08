#pragma once

#include <iostream>

using namespace std;

class Stereo {
private:
    string location;
    int state;

public:
    const int CD = 3;
    const int DVD = 2;
    const int RADIO = 1;
    const int OFF = 0;

    Stereo(string location) : location{location}, state{OFF} {}

    void on() { 
        cout << location << " 스테레오 전원을 켰습니다.\n"; 
    }

    void off() {
        state = OFF;
        cout << location << " 스테레오 전원을 껐습니다.\n"; 
    }

    void setCd() { 
        state = CD;
        cout << location << " 스테레오를 CD로 설정했습니다.\n"; 
    }

    void setDvd() {
        state = DVD; 
        cout << location << " 스테레오를 DVD로 설정했습니다.\n"; 
    }

    void setRadio() {
        state = RADIO; 
        cout << location << " 스테레오를 라디오로 설정했습니다.\n"; 
    }

    void setVolumn(int volumn) { 
        cout << location << " 스테레오 볼륨을 " << volumn << "으로 설정했습니다.\n"; 
    }

    int getState() { return state; }
};