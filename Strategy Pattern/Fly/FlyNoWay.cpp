#include <iostream>
#include "../Behavior/FlyBehavior.cpp"

using namespace std;

class FlyNoWay : public FlyBehavior {
public:
	void fly() {
		cout << "오리는 날 수 없다. 엄마에게 혼났죠~\n";
	}
};
