#include <iostream>
#include "../FlyBehavior.cpp"

using namespace std;

class FlyWithWings : public FlyBehavior {
public:
	void fly() {
		cout << "I Can Fly.\n";
	}
};
