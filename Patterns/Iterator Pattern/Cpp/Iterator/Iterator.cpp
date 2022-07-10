#pragma once

#include "../Menu/MenuItem.cpp"

#define interface class

interface Iterator {
public:
    virtual bool hasNext() = 0;
    virtual MenuItem* next() = 0;
};