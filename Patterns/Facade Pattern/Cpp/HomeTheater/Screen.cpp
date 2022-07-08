#pragma once

#include <iostream>
#include <string>

using namespace std;

class Screen {
private:
    string description;

public:
    Screen(string description) : description{description} {}

    void up() {
        cout << description << " going up\n";
    }

    void down() {
        cout << description << " going down\n";
    }

    string toString() {
        return description;
    }
};