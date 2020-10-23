#include <iostream>
#include "Cpp22Class.h"
using namespace std;

int main(int argc, char** argv) {
	Cpp22Class obj1;
	obj1.printing();
	const Cpp22Class constobj;
	constobj.printing2();
	return 0;
}
