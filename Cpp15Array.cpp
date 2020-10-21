#include <iostream>
using namespace std;

void printArr(int*, int);

int main() {
	int vector[4];
	int sum=0;
	for(int i=0;i<4;i++) {
		cout << "Enter element " << i << endl;
		cin >> vector[i];
		sum+=vector[i];
	}
	printArr(vector,4);
	cout << "\nThe sum of the elements is " <<sum << endl;
	return 0;
}

void printArr(int Arr[], int sizeArr) {
	for(int i=0;i<sizeArr;i++) {
		cout << Arr[i] << " ";
	}
}
