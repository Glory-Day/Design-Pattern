#include "../Pizza.cpp"

class ChicagoStyleCheesePizza : public Pizza {
public:
    ChicagoStyleCheesePizza() {
        name = "시카고 스타일 딥 디쉬 치즈 피자";
        dough = "아주 두꺼운 크러스트";
        sauce = "플럼토마토 소스";

        toppings.push_back("\t잘게 조각낸 모짜렐라 치즈\n");
    }

    void cut() override {
        cout << "네모난 모양으로 파자 자르기\n";
    }
};