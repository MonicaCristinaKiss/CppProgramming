#include <iostream>
using namespace std;

class Cpp25Class {
	public:
		Cpp25Class() {
			a=0;
		}
	private:
		int a;
	friend void friendFunction(Cpp25Class &objCpp25);
};

void friendFunction(Cpp25Class &objCpp25) {
	objCpp25.a=77;
	cout<< objCpp25.a <<endl;
}

int main() {
	Cpp25Class obj1;
	friendFunction(obj1);
	return 0;
}
