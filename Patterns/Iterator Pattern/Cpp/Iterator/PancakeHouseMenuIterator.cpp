#pragma once

#include <vector>
#include "Iterator.cpp"
#include "../Menu/MenuItem.cpp"

using namespace std;

class PancakeHouseMenuIterator : public Iterator {
private:
    vector<MenuItem*> items;
    int position;

public:
    PancakeHouseMenuIterator(vector<MenuItem*> items) : items(items) {
        position = 0;
    }

    MenuItem* next() override {
        return items[position++];
    }

    bool hasNext() override {
        if (position >= items.size() || items[position] == nullptr) return false;
        return true;
    }
};