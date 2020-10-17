#include <iostream>
using namespace std;

void printSmth(); //prototype

void printStuff(int x) {
	cout << "My favorite number is " << x << endl;
}

int addNumbers(int x,int y) {
	return x+y;
}

int main() {
	printSmth();
	printStuff(18);
	cout << addNumbers(5,7)<<endl;
	if(addNumbers(3,5)>=8) {
		cout << 3<<"+"<<5<<">= 8"<<endl;
	}
	return 0;
}

void printSmth() {
	cout << "Text inside the function" << endl;
}
