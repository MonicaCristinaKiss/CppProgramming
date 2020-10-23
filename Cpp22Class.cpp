#include "Cpp22Class.h"
#include <iostream>

using namespace std;
Cpp22Class::Cpp22Class()
{
}

void Cpp22Class::printing() {
	cout << "I am in a function" << endl;
}
void Cpp22Class::printing2() const {
	cout << "I am inside the constant function" << endl;
}
