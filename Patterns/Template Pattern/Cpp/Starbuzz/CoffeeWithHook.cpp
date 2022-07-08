#pragma once

#include "CaffeineBeverageWithHook.cpp"

using namespace std;

class CoffeeWithHook : public CaffeineBeverageWithHook {
private:
    char getUserInput() {   
        cout << "커피에 우유와 설탕을 넣을까요? (y/n) : ";
                
        char answer;
        cin >> answer;

        return answer;
    }

public:
    void brew() override {
        cout << "필터로 커피를 우려내는 중\n";
    }

    void addCondiments() override {
        cout << "우유와 설탕을 추가하는 중\n";
    }

    bool customerWantsCondiments() override {
        char answer = getUserInput();

        if (answer == 'y') return true;
        return false;
    }
};