#include <iostream>
#include "Fly/FlyNoWay.cpp"
#include "Quack/Quack.cpp"
#include "Duck.cpp"

using namespace std;

class MallardDuck : public Duck {
public:
	MallardDuck() {
		flyBehavior = new FlyNoWay();
		quackBehavior = new Quack();
	}

	void display() {
		cout << "Mallard Duck입니다.\n";
	}
};
