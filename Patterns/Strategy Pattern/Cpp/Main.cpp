#include <iostream>
#include "Duck/MallardDuck.cpp"

using namespace std;

int main() {
	Duck* mallardDuck = new MallardDuck();
	
	mallardDuck->display();

	mallardDuck->swim();

	mallardDuck->performFly();
	mallardDuck->performQuack();
}
