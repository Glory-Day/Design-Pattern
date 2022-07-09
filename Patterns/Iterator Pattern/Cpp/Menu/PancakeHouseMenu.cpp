#pragma once

#include <string>
#include <vector>
#include "../Iterator/PancakeHouseMenuIterator.cpp"
#include "MenuItem.cpp"

using namespace std;

class PancakeHouseMenu {
private:
    vector<MenuItem*> menuItems;

public:
    PancakeHouseMenu() {
        menuItems = vector<MenuItem*>();

        addItem("K&B 팬케이크 세트", "스크렘블 에그와 토스트가 곁들어진 팬케이크", true, 2.99);
        addItem("레귤러 팬케이크 세트", "달걀 프라이와 소시지가 곁들어진 팬케이크", false, 2.99);
        addItem("블루베리 팬케이크 세트", "신선한 블루베리와 블루베리 시럽으로 만든 팬케이크", true, 3.49);
        addItem("와플", "취향에 따라 블루베리나 딸기를 얹을 수 있는 와플", true, 3.59);
    }

    void addItem(string name, string description, bool vegetarian, double price) {
        menuItems.push_back(new MenuItem(name, description, vegetarian, price));
    }

    vector<MenuItem*> getMenuItems() {
        return menuItems;
    }

    Iterator* createIterator() {
        return new PancakeHouseMenuIterator(menuItems);
    }
};