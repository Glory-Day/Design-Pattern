#include <iostream>
#include "../IQuackBehavior.cpp"

using namespace std;

class Quack : public IQuackBehavior {
public:
	void quack() {
		cout << "I Can Quack.\n";
	}
};
