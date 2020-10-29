#include <iostream>
#include "Cpp29Father.h"
#include "Cpp29Son.h"
using namespace std;

int main(int argc, char** argv) {
	Cpp29Son son;
	son.doSmth();
	cout << son.publicv << endl;

	return 0;
}
