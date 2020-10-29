#include <iostream>
#include "Cpp27Class.h"
using namespace std;

Cpp27Class::Cpp27Class()
{
}

Cpp27Class::Cpp27Class(int a)
{
	num=a;
}

Cpp27Class Cpp27Class::operator+(Cpp27Class acpp27o) {
	Cpp27Class brandNew;
	brandNew.num=num+acpp27o.num;
	return brandNew;
}
