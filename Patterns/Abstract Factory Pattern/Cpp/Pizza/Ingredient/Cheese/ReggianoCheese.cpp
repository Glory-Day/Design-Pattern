#include "./Cheese.cpp"

class ReggianoCheese : public Cheese {
public:
    string getName() override {
        return "잘게 조각낸 레지아노 치즈";
    }
};