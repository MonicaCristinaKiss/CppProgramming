#include <iostream>
using namespace std;

void printn(int x) {
	cout << "integer " << x << endl;
}
void printn(float x) {
	cout << "float " << x << endl;
}

int main() {
	int a = 7;
	float b = 3.1415;
	printn(a);
	printn(b);
	return 0;
}
