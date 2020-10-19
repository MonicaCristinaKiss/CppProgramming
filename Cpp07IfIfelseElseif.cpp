#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter a value for a" << endl;
	cin >> a;
	if((a>3)&&(a<9)) {
		cout << "a is between 3 and 9" << endl;
	}
	if(a%2==1) {
		cout << "a is uneven" << endl;
	}else {
		cout << "a is even" << endl;
	}
	if(a<0) {
		cout << "a is negative" << endl;
	}else if(a<100) {
		cout << "a is positive and less than 100" << endl;
	}else {
		cout << "a is positive and greater than 100" << endl;
	}
	return 0;
}
