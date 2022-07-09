#pragma once

#include <iostream>
#include <string>
#include <list>
#include "MenuComponent.cpp"

using namespace std;

class Menu : public MenuComponent {
private:
    list<MenuComponent*> menuComponents;
    string name;
    string description;

public:
    Menu(string name, string description) : name(name), description(description) {
        menuComponents = list<MenuComponent*>();
    }

    void add(MenuComponent* menuComponent) override {
        menuComponents.push_back(menuComponent);
    }

    void remove(MenuComponent* menuComponent) override {
        menuComponents.remove(menuComponent);
    }

    MenuComponent* getChild(int i) override {
        auto iter = menuComponents.begin();
        advance(iter, i);
        return *iter;
    }

    string getName() override {
        return name;
    }

    string getDescription() override {
        return description;
    }

    void print() {
        cout << "\n" << getName();
        cout << ", " << getDescription() << "\n";
        cout << "----------------------" << "\n";

        for (auto& menuComponent: menuComponents) {
            menuComponent->print();
        }
    }
};