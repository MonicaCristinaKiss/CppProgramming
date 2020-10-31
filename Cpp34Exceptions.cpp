#include <iostream>
using namespace std;

int main() {
	
	try {
		int fatherAge=30;
		int sonAge=34;
		
		if (sonAge >= fatherAge) {
			throw 99;
		}
	}catch(int x) {
		cout << "son can not be older than father, ERROR NUMBER:" <<x<<endl;
	}
	
	try {
		float num1;
		cout << "Division\nEnter the first number: " << endl;
		cin >> num1;
		float num2;
		cout << "Enter the second number: " << endl;
		cin >> num2;
		if(num2==0) {
			throw 0;
		}
		
		cout <<"Result: "<< num1/num2 << endl;
	}catch(...) {
		cout << "You can't divide by 0"<<endl;
	}
	
	return 0;
}
