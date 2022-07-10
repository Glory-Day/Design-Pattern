#pragma once

#include <iostream>
#include <string>
#include "MenuComponent.cpp"

using namespace std;

class MenuItem : public MenuComponent {
private:
    string name;
    string description;
    bool vegetarian;
    double price;

public: 
    MenuItem(string name, string description, bool vegetatian, double price)
        : name(name), description(description), vegetarian(vegetarian), price(price) {}
    
    string getName() override { 
        return name;
    }

    string getDescription() override {
        return description;
    }

    bool isVegetarian() override {
        return vegetarian;
    }

    double getPrice() override {
        return price;
    }

    void print() override {
        cout << "  " << getName();
        if (isVegetarian()) cout << "(v)";
        cout << ", " << getPrice() << "\n";
        cout << "  -- " << getDescription() << "\n";
    }
};