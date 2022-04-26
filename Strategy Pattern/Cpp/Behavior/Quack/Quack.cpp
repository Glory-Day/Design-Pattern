#include <iostream>
#include "../QuackBehavior.cpp"

using namespace std;

class Quack : public QuackBehavior {
public:
	void quack() {
		cout << "I Can Quack.\n";
	}
};
