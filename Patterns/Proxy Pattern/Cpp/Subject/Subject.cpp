#pragma once

#include <iostream>
#include <string>
#include "Image.cpp"

using namespace std;

class Subject : public Image {
public:
    Subject(const string path) {
        cout << "Load Image : " << path << '\n';
    }

    void render() override {
        cout << "Render Image\n";
    }
};