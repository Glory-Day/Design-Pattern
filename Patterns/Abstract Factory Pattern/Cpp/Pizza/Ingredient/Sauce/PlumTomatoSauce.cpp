#include "./Sauce.cpp"

class PlumTomatoSauce : public Sauce {
public:
    string getName() override {
        return "플럼토마토 소스";
    }
};