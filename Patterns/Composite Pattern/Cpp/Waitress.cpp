#pragma once

#include <iostream>
#include "Menu/MenuComponent.cpp"

using namespace std;

class Waitress {
private:
    MenuComponent* allMenus;

public:
    Waitress(MenuComponent* allMenus) : allMenus(allMenus) {}

    void printMenu() {
        allMenus->print();
    }
};