#include "./Dough.cpp"

class ThickCrustDough : public Dough {
public:
    string getName() override {
        return "아주 두꺼운 크러스트";
    }
};