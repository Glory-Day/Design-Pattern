#pragma once

#include <iostream>
#include <string>

using namespace std;

class TheaterLights {
private:
    string description;

public:
    TheaterLights(string description) : description{description} {}
    
    void on() {
        cout << description << " on\n";
    }

    void off() {
        cout << description << " off\n";
    }

    void dim(int level) {
        cout << description << " dimming to " << level << "\n";
    }

    string toString() {
        return description;
    }
};