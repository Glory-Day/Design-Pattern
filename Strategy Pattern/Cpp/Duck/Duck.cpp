#include <iostream>
#include "../Behavior/FlyBehavior.cpp"
#include "../Behavior/QuackBehavior.cpp"

using namespace std;

class Duck {
protected:
	FlyBehavior* flyBehavior;
	QuackBehavior* quackBehavior;

public:
	Duck() { }

	virtual void display() = 0;

	void swim();

	void performFly();
	void performQuack();

	void setFlyBehavior(FlyBehavior* fb);
	void setQuackBehavior(QuackBehavior* qb);
};

void Duck::swim() {
	cout << "I Can Swim.\n";
}

void Duck::performFly() {
	flyBehavior->fly();
}

void Duck::performQuack() {
	quackBehavior->quack();
}

void Duck::setFlyBehavior(FlyBehavior* fb) {
	flyBehavior = fb;
}

void Duck::setQuackBehavior(QuackBehavior* qb) {
	quackBehavior = qb;
}
