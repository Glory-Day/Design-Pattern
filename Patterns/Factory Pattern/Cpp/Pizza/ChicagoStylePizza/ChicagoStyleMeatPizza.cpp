#include "../Pizza.cpp"

class ChicagoStyleMeatPizza : public Pizza {
public:
    ChicagoStyleMeatPizza() {
        name = "시카고 스타일 딥 디쉬 고기 피자";
        dough = "아주 두꺼운 크러스트";
        sauce = "플럼토마토 소스";

        toppings.push_back("\t잘게 조각낸 고기\n");
    }

    void cut() override {
        cout << "네모난 모양으로 파자 자르기\n";
    }
};