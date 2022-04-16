#include <iostream>
#include "../Behavior/QuackBehavior.cpp"

using namespace std;

class Squeak : public QuackBehavior {
public:
	void quack() {
		cout << "응애앜\n";
	}
};
