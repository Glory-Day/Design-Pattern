#pragma once

#include <string>

#define interface class

using namespace std;

interface Veggies {
public:
    virtual string getName() = 0;
};