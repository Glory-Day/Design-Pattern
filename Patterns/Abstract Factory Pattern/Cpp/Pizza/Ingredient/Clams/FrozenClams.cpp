#include "./Clams.cpp"

class FrozenClams : public Clams {
public:
    string getName() override {
        return "냉동 조개들";
    }
};