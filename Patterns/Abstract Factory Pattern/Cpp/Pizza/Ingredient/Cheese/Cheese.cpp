#pragma once

#include <string>

#define interface class

using namespace std;

interface Cheese {
public:
    virtual string getName() = 0;
};