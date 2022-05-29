#pragma once

#include <iostream>
#include <string>

#include "./DvdPlayer.cpp"

class Projector {
private:
    string description;

public:
    Projector(string description) : description{description} {}

    void on() {
        cout << description << " on\n";
    }

    void off() {
        cout << description << " off\n";
    }

    void wideScreenMode() {
        cout << description << " in wide screen mode (16x9 aspect ratio)\n";
    }

    void tvMode() {
        cout << description << " in tv mode (4x3 aspect ratio)\n";
    }

    string toString() {
        return description;
    }
};