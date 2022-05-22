#pragma once

#include <string>

#define interface class

using namespace std;

interface Sauce {
public:
    virtual string getName() = 0;
};