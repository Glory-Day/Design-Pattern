#include "Starbuzz/CoffeeWithHook.cpp"
#include "Starbuzz/TeaWithHook.cpp"
#include "Starbuzz/CaffeineBeverageWithHook.cpp"

using namespace std;

int main() {
    TeaWithHook* teaHook = new TeaWithHook();
    CoffeeWithHook* coffeeHook = new CoffeeWithHook();

    cout << "\n홍차 준비 중...\n";
    teaHook->prepareRecipe();

    cout << "\n커피 준비 중...\n";
    coffeeHook->prepareRecipe();
}