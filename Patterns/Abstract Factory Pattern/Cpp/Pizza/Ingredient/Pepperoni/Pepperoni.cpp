#pragma once

#include <string>

#define interface class

using namespace std;

interface Pepperoni {
public:
    virtual string getName() = 0;
};