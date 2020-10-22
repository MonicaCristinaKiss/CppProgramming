#include <iostream>
#include "Cpp20Class.h"
using namespace std;

int main(int argc, char** argv) {
	Cpp20Class object20;
	// a class is a type of data
	Cpp20Class * pointer20 = &object20; // memory address of object20
	object20.printSmth();
	pointer20->printSmth();
	return 0;
}
