#ifndef CPP24PEOPLE_H
#define CPP24PEOPLE_H

#include <string>
#include "Cpp24Birthday.h"
using namespace std;

class Cpp24People
{
	public:
		Cpp24People(string, Cpp24Birthday);
		void printInfo();
	private:
		string name;
		Cpp24Birthday dateOfBirth;
};

#endif
