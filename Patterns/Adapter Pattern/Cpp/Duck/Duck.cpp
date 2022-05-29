#pragma once

#define interface class

interface Duck {
public:
    virtual void quack() = 0;
    virtual void fly() = 0;
};