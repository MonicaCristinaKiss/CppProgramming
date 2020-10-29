#include <iostream>
#include "Cpp27Class.h"
using namespace std;

int main(int argc, char** argv) {
	Cpp27Class a(34);
	Cpp27Class b(21);
	Cpp27Class d(12);
	Cpp27Class c;
	c=a+b+d;
	cout << c.num << endl;
	return 0;
}
