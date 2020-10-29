#include <iostream>
#include "Cpp26Class.h"
using namespace std;

Cpp26Class::Cpp26Class(int var)
:a(var)
{
	
}

void Cpp26Class::printValue() {
	cout << "a= " << a << endl;
	cout << "this->a= " << this->a << endl;
	cout << "(*this).a= " << (*this).a << endl;
	cout << "this->getValue()= " << this->getValue() << endl;
	cout << "(*this).getValue()= "<< (*this).getValue()<<endl;
}

int Cpp26Class::getValue() {
	return a;
}
