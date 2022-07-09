#pragma once

#include <iostream>
#include "Iterator/Iterator.cpp"
#include "Menu/PancakeHouseMenu.cpp"
#include "Menu/DinerMenu.cpp"

using namespace std;

class Waitress {
private:
    PancakeHouseMenu* pancakeHouseMenu;
    DinerMenu* dinerMenu;

public:
    Waitress(PancakeHouseMenu* pancakeHouseMenu, DinerMenu* dinerMenu)
        : pancakeHouseMenu(pancakeHouseMenu), dinerMenu(dinerMenu) {}

    void printMenu() {
        Iterator* pancakeIterator = pancakeHouseMenu->createIterator();
        Iterator* dinerIterator = dinerMenu->createIterator();

        cout << "메뉴\n----\n아침 메뉴\n";
        printMenu(pancakeIterator);

        cout << "\n점심 메뉴\n";
        printMenu(dinerIterator);
    }

    void printMenu(Iterator* iterator) {
        while (iterator->hasNext()) {
            MenuItem* menuItem = iterator->next();
            cout << menuItem->getName() << ", ";
            cout << menuItem->getPrice() << " -- ";
            cout << menuItem->getDescription() << "\n";
        }
    }
};