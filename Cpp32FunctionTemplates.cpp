#include <iostream>
using namespace std;

template <class F, class S>
F add(F a, S b) {
	return a+b;
}

int main() {
	int x=8;
	float y=7.5, z;
	z=add(x,y);
	cout << z << endl;
	z=add(y,x);
	cout << z << endl;
	return 0;
}
