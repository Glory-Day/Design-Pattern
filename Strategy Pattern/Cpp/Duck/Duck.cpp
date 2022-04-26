#include <iostream>
#include "../Behavior/IFlyBehavior.cpp"
#include "../Behavior/IQuackBehavior.cpp"

using namespace std;

class Duck {
protected:
	IFlyBehavior* flyBehavior;
	IQuackBehavior* quackBehavior;

public:
	Duck() { }

	virtual void display() = 0;

	void swim();

	void performFly();
	void performQuack();

	void setFlyBehavior(IFlyBehavior* fb);
	void setQuackBehavior(IQuackBehavior* qb);
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

void Duck::setFlyBehavior(IFlyBehavior* fb) {
	flyBehavior = fb;
}

void Duck::setQuackBehavior(IQuackBehavior* qb) {
	quackBehavior = qb;
}
