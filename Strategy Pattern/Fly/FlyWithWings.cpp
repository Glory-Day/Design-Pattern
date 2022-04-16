#include <iostream>
#include "../Behavior/FlyBehavior.cpp"

using namespace std;

class FlyWithWings : public FlyBehavior {
public:
	void fly() {
		cout << "날아올라 저 하늘 멋진 달이 될래요~\n";
	}
};
