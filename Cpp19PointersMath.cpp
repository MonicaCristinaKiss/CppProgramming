#include <iostream>
using namespace std;

int main() {
	int vector[4];
	int * pv0=&vector[0];
	int * pv1=&vector[1];
	int * pv2=&vector[2];
	cout << "pv0 is at " << pv0 << endl;
	cout << "pv1 is at " << pv1 << endl;
	cout << "pv2 is at " << pv2 << endl;
	pv0 +=2;
	cout << "pv0 is now at " << pv0 << endl;
	cout << "pv1 is now at " << pv1 << endl;
	cout << "pv2 is now at " << pv2 << endl;
	return 0;
}
