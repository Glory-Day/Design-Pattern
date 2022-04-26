#include <iostream>
#include "../QuackBehavior.cpp"

using namespace std;

class MuteQuack : public QuackBehavior {
public:
	void quack() {
		cout << "I Can't Quack.\n";
	}
};
