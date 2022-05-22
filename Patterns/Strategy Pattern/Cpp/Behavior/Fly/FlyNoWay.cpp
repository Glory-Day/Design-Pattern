#include <iostream>
#include "../IFlyBehavior.cpp"

using namespace std;

class FlyNoWay : public IFlyBehavior {
public:
	void fly() {
		cout << "I Can't Fly.\n";
	}
};
