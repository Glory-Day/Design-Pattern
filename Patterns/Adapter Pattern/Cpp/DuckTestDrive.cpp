#include <iostream>

#include "./Duck/MallardDuck.cpp"
#include "./Turkey/WildTurkey.cpp"
#include "./Turkey/TurkeyAdapter.cpp"

using namespace std;

void testDuck(Duck* duck) {
    duck->quack();
    duck->fly();
}

int main() {
    Duck* duck = new MallardDuck();

    Turkey* turkey = new WildTurkey();
    Duck* turkeyAdapter = new TurkeyAdapter(turkey);

    cout << "칠면조가 말하길\n";
    turkey->gobble();
    turkey->fly();

    cout << "\n오리가 말하길\n";
    testDuck(duck);

    cout << "\n칠면조 어뎁터가 말하길\n";
    testDuck(turkeyAdapter);
}