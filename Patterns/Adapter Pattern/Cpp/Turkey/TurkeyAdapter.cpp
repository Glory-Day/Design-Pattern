#include "./Turkey.cpp"
#include "../Duck/Duck.cpp"

class TurkeyAdapter : public Duck {
private:
    Turkey* turkey;

public:
    TurkeyAdapter(Turkey* turkey) : turkey{turkey} {}

    void quack() override {
        turkey->gobble();
    }

    void fly() override {
        for (int i = 0; i < 5; i++) {
            turkey->fly();
        }
    }
};