#pragma once

#include "Iterator.cpp"
#include "../Menu/MenuItem.cpp"
#include "../Menu/DinerMenu.cpp"

#define MAX_ITEMS 6

class DinerMenuIterator : public Iterator {
private:
    MenuItem** items;
    int position;

public:
    DinerMenuIterator(MenuItem** items) : items(items) {
        position = 0;
    }

    MenuItem* next() override {
        return items[position++];
    }

    bool hasNext() override {
        if (position >= MAX_ITEMS || items[position] == nullptr) return false;
        return true;
    }
};