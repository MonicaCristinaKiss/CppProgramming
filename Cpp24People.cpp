#include "Cpp24People.h"
#include <iostream>
#include "Cpp24Birthday.h"
using namespace std;

Cpp24People::Cpp24People(string x, Cpp24Birthday bo)
: name(x),
dateOfBirth(bo)
{
}

void Cpp24People::printInfo() {
	cout <<name<< " was born on ";
	dateOfBirth.printDate();
}
