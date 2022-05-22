#pragma once

#include <string>

#define interface class

using namespace std;

interface Dough {
public:
    virtual string getName() = 0;
};