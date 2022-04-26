#include <iostream>
#include "../Behavior/Fly/FlyNoWay.cpp"
#include "../Behavior/Quack/Quack.cpp"
#include "Duck.cpp"

using namespace std;

class MallardDuck : public Duck {
public:
	MallardDuck() {
		flyBehavior = new FlyNoWay();
		quackBehavior = new Quack();
	}

	void display() {
		cout << "I'm Mallard Duck.\n";
	}
};
