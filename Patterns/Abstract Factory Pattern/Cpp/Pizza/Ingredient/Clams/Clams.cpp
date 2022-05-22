#pragma once

#include <string>

#define interface class

using namespace std;

interface Clams {
public:
    virtual string getName() = 0;
};