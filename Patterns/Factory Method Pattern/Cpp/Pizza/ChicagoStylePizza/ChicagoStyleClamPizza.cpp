#include "../Pizza.cpp"

class ChicagoStyleClamPizza : public Pizza {
public:
    ChicagoStyleClamPizza() {
        name = "시카고 스타일 딥 디쉬 조개 피자";
        dough = "아주 두꺼운 크러스트";
        sauce = "플럼토마토 소스";

        toppings.push_back("\t잘게 조각낸 조개\n");
    }

    void cut() override {
        cout << "네모난 모양으로 파자 자르기\n";
    }
};