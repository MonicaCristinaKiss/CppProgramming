#include <iostream>
#include "Cpp24Birthday.h"
#include "Cpp24People.h"
using namespace std;

int main(int argc, char** argv) {
	Cpp24Birthday bobj(3,25,1989);
	Cpp24People moni("Monica", bobj);
	moni.printInfo();
	return 0;
}
