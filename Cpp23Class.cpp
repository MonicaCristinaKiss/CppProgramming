#include "Cpp23Class.h"
#include <iostream>

using namespace std;

Cpp23Class::Cpp23Class(int a, int b)
:var(a),
var2(b)
{
}

void Cpp23Class::print() {
	cout << "regular variable is " <<var<<endl;
	cout << "constant variable is "<<var2<<endl;
}
