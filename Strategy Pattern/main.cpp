#include <iostream>
#include "MallardDuck.cpp"

using namespace std;

int main() {
	Duck* mallard = new MallardDuck();
	
	mallard->performQuack();
	mallard->performFly();
}
