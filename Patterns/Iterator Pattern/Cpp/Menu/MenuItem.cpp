#pragma once

#include <string>

using namespace std;

class MenuItem {
private:
    string name;
    string description;
    bool vegetarian;
    double price;

public: 
    MenuItem(string name, string description, bool vegetatian, double price)
        : name(name), description(description), vegetarian(vegetarian), price(price) {}
    
    string getName() { 
        return name;
    }

    string getDescription() {
        return description;
    }

    bool isVegetarian() {
        return vegetarian;
    }

    double getPrice() {
        return price;
    }
};