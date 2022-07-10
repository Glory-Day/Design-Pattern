#pragma once

#include <string>
#include <stdexcept>

using namespace std;

class MenuComponent {
public:
    virtual void add(MenuComponent* menuComponent) {
        throw runtime_error("Unsupported operation exception.\n");
    }

    virtual void remove(MenuComponent* menuComponent) {
        throw runtime_error("Unsupported operation exception.\n");
    }

    virtual MenuComponent* getChild(int i) {
        throw runtime_error("Unsupported operation exception.\n");
    }

    virtual string getName() {
        throw runtime_error("Unsupported operation exception.\n");
    }

    virtual string getDescription() {
        throw runtime_error("Unsupported operation exception.\n");
    }

    virtual bool isVegetarian() {
        throw runtime_error("Unsupported operation exception.\n");
    }

    virtual double getPrice() {
        throw runtime_error("Unsupported operation exception.\n");
    }

    virtual void print() {
        throw runtime_error("Unsupported operation exception.\n");
    }
};