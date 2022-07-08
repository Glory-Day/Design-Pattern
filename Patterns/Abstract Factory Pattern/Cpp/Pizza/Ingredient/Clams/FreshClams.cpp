#include "./Clams.cpp"

class FreshClams : public Clams {
public:
    string getName() override {
        return "신선한 조개들";
    }
};