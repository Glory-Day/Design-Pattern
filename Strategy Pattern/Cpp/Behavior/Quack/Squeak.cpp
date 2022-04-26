#include <iostream>
#include "../QuackBehavior.cpp"

using namespace std;

class Squeak : public QuackBehavior {
public:
	void quack() {
		cout << "I Can Squeak.\n";
	}
};
