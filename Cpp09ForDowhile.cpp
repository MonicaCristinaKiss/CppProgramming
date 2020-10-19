#include <iostream>
using namespace std;

int main() {
	float x=1;
	for(int i=1;i<8;i++) {
		cout << i << endl;
	}
	
	do {
		cout << x << endl;
		x++;
	}while(x<1);
	return 0;
}
