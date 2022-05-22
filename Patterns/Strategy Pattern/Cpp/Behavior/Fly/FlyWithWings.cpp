#include <iostream>
#include "../IFlyBehavior.cpp"

using namespace std;

class FlyWithWings : public IFlyBehavior {
public:
	void fly() {
		cout << "I Can Fly.\n";
	}
};
