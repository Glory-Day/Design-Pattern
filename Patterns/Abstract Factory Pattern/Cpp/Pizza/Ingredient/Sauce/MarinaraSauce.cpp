#include "./Sauce.cpp"

class MarinaraSauce : public Sauce {
public:
    string getName() override {
        return "마리나라 소스";
    }
};