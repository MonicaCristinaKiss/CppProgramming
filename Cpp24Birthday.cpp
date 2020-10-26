#include "Cpp24Birthday.h"
#include <iostream>

using namespace std;

Cpp24Birthday::Cpp24Birthday(int m, int d, int y)
{
	month=m;
	day=d;
	year=y;
}

void Cpp24Birthday::printDate() {
	cout <<month<<"/"<<day<<"/"<<year<< endl;
}
