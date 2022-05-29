#pragma once

#include <iostream>
#include <string>

using namespace std;

class PopcornPopper {
private:
    string description;

public:
    PopcornPopper(string description) : description{description} {}
    
    void on() {
        cout << description << " on\n";
    }

    void off() {
        cout << description << " off\n";
    }

    void pop() {
        cout << description << " popping popcorn\n";
    }

    string toString() {
        return description;
    }
};