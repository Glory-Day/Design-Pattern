#pragma once

#include "CaffeineBeverageWithHook.cpp"

using namespace std;

class TeaWithHook : public CaffeineBeverageWithHook {
private:
    char getUserInput() {   
        cout << "홍차에 레몬을 넣을까요? (y/n) : ";
                
        char answer;
        cin >> answer;

        return answer;
    }

public:
    void brew() override {
        cout << "찻잎을 우려내는 중\n";
    }

    void addCondiments() override {
        cout << "레몬을 추가하는 중\n";
    }

    bool customerWantsCondiments() override {
        char answer = getUserInput();

        if (answer == 'y') return true;
        return false;
    }
};