#include <iostream>
#include "Cpp30MClass.h"
#include "Cpp30Daughter.h"
using namespace std;

Cpp30Daughter::Cpp30Daughter()
{
	cout << "I am the Daughter Constructor" << endl;
}

Cpp30Daughter::~Cpp30Daughter()
{
	cout << "Daughter Deconstructor" << endl;
}
