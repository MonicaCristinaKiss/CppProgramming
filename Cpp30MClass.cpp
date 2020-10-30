#include <iostream>
#include "Cpp30MClass.h"
#include "Cpp30Daughter.h"
using namespace std;

Cpp30MClass::Cpp30MClass()
{
	cout << "I am the Mother Constructor" << endl;
}

Cpp30MClass::~Cpp30MClass()
{
	cout << "Mother Deconstructor" << endl;
}
