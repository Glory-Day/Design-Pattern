#include <iostream>
#include "../Behavior/QuackBehavior.cpp"

using namespace std;

class Quack : public QuackBehavior {
public:
	void quack() {
		cout << "응애\n";
	}
};
