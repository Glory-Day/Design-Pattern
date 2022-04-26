#include <iostream>
#include "../FlyBehavior.cpp"

using namespace std;

class FlyNoWay : public FlyBehavior {
public:
	void fly() {
		cout << "I Can't Fly.\n";
	}
};
