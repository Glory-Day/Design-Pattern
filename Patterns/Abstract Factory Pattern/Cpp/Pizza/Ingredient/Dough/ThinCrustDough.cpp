#include "./Dough.cpp"

class ThinCrustDough : public Dough {
public:
    string getName() override {
        return "씬 크러스트 도우";
    }
};