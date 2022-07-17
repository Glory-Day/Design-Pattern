#pragma once

#define interface class

interface Image {
public:
    virtual void render() = 0;
    virtual ~Image() {}
};