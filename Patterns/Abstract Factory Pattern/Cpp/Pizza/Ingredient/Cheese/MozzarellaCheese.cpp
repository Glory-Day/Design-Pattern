#include "./Cheese.cpp"

class MozzarellaCheese : public Cheese {
public:
    string getName() override {
        return "잘게 조각낸 모짜랠라 치즈";
    }
};