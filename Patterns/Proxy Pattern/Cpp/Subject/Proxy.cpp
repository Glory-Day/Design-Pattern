#pragma once

#include <string>
#include "Subject.cpp"

using namespace std;

class Proxy : public Image {
private:
    Image* image;
    string path;

public:
    Proxy(string path) : image(nullptr), path(path) {}

    ~Proxy() override {
        if (image != nullptr) delete image;
    }

    void render() override {
        if (image == nullptr) image = new Subject(path);
        image->render();
    }
};