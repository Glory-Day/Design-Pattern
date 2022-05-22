#include <iostream>
#include "../IQuackBehavior.cpp"

using namespace std;

class Squeak : public IQuackBehavior {
public:
	void quack() {
		cout << "I Can Squeak.\n";
	}
};
