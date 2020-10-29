#include <iostream>
#include "Cpp28Mother.h"
#include "Cpp28Daughter.h"
using namespace std;

int main(int argc, char** argv) {
	Cpp28Mother mom;
	mom.sayName();
	
	Cpp28Daughter daugh;
	daugh.sayName();
	return 0;
}
