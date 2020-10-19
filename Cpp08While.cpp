#include <iostream>
using namespace std;

int main() {
	int i=0;
	while(i<=3) {
		cout << "i este " << i << endl;
		i++;
	}

	int number;
	float x=0.0, sum=0.0;
	cout << "Enter a number or 0 to quit" << endl;
	cin >> number;
	while(number!=0) {
		sum+=number;
		x++;
		cout << "Enter another number or 0 to quit" << endl;
		cin >> number;
	}
	cout << "The total is " << sum <<endl;
	cout << "The average is " << sum/x << endl;
	return 0;
}
