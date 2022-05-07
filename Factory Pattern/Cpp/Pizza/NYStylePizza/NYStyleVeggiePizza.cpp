#include "../Pizza.cpp"

class NYStyleVeggiePizza : public Pizza {
public:
    NYStyleVeggiePizza() {
        name = "뉴욕 스타일 소스와 채소 피자";
        dough = "씬 크러스트 도우";
        sauce = "마리나라 소스";

        toppings.push_back("\t잘게 썬 채소\n");
    }
};