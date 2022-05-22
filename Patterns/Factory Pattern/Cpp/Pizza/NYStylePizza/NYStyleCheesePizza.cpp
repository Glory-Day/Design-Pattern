#include "../Pizza.cpp"

class NYStyleCheesePizza : public Pizza {
public:
    NYStyleCheesePizza() {
        name = "뉴욕 스타일 소스와 치즈 피자";
        dough = "씬 크러스트 도우";
        sauce = "마리나라 소스";

        toppings.push_back("\t잘게 썬 레지아노 치즈\n");
    }
};