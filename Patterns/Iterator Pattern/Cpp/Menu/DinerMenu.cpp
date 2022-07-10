#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "../Iterator/Iterator.cpp"
#include "../Iterator/DinerMenuIterator.cpp"
#include "MenuItem.cpp"

using namespace std;

class DinerMenu {
private:
    int numberOfItems;
    MenuItem** menuItems;

public:
    DinerMenu() {
        numberOfItems = 0;
        menuItems = new MenuItem*[MAX_ITEMS];

        addItem("채식주의자용 BLT", "통밀 위에 콩고기 베이컨, 상추, 토마토를 얹은 메뉴", true, 2.99);
        addItem("BLT", "통밀 위에 베이컨, 상추, 토마토를 얹은 메뉴", false, 2.99);
        addItem("오늘의 스프", "감자 샐러드를 곁들인 오늘의 스프", false, 3.29);
        addItem("핫도그", "사워크라우트, 갖은 양념, 양파, 치즈가 겉들여진 핫도그", false, 3.05);
    }

    void addItem(string name, string description, bool vegetarian, double price) {
        if (numberOfItems >= MAX_ITEMS) cout << "죄송합니다, 메뉴가 꽉 찼습니다. 더 이상 추가할 수가 없습니다.\n";
        else menuItems[numberOfItems++] = new MenuItem(name, description, vegetarian, price);
    }

    Iterator* createIterator() {
        return new DinerMenuIterator(menuItems);
    }
};