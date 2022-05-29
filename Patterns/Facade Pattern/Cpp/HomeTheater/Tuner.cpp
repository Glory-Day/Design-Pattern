#pragma once

#include <iostream>
#include <string>

class Tuner {
private:
    string description;
    double frequency;

public:
    Tuner(string description) : description{description} {}
    
    void on() {
        cout << description << " on\n";
    }

    void off() {
        cout << description << " off\n";
    }

    void setFrequency(double frequency) {
        this->frequency = frequency;
        cout << description << " setting frequency to " << frequency << "\n";
    }

    void setAm() {
        cout << description << " setting AM mode\n";
    }

    void setFm() {
        cout << description << " setting FM mode\n";
    }

    string toString() {
        return description;
    }
};