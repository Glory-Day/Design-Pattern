#include <iostream>
#include "../Behavior/QuackBehavior.cpp"

using namespace std;

class MuteQuack : public QuackBehavior {
public:
	void quack() {
		cout << "읍읍\n";
	}
};
