#include <iostream>
#include "../IQuackBehavior.cpp"

using namespace std;

class MuteQuack : public IQuackBehavior {
public:
	void quack() {
		cout << "I Can't Quack.\n";
	}
};
