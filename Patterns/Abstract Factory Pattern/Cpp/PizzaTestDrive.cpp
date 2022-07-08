#include <iostream>

#include "Pizza/Pizza.cpp"

#include "PizzaStore/PizzaStore.cpp"
#include "PizzaStore/NYPizzaStore.cpp"
#include "PizzaStore/ChicagoPizzaStore.cpp"

using namespace std;

int main() {
    PizzaStore* nyStore = new NYPizzaStore();
    PizzaStore* chicagoStore = new ChicagoPizzaStore();

    Pizza* pizza = nyStore->orderPizza("veggie");
    cout << "에단이 주문한 " << pizza->getName() << '\n';

    pizza = chicagoStore->orderPizza("cheese");
    cout << "조엘이 주문한 " << pizza->getName() << '\n';
}