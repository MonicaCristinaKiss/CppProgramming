#include <iostream>
using namespace std;

void passbyvalue(int);
void passbyreference(int*);

int main() {
	int variabila=7;
	cout << &variabila << endl;
	
	int * pointer;
	pointer=&variabila;
	cout << pointer << endl;
	
	int a=7,b=7;
	passbyvalue(a);
	cout << "a is " << a << endl;
	passbyreference(&b);
	cout << "b is " << b << endl;
	return 0;
}

void passbyvalue(int x) {
	x=10;
}

void passbyreference(int*x) {
	*x=10;
}
