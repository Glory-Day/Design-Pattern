#pragma once

#define interface class

interface Turkey {
public:
    virtual void gobble() = 0;
    virtual void fly() = 0;
};