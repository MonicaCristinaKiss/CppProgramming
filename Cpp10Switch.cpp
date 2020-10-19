#include <iostream>
using namespace std;

int main() {
	char c='a';
	switch(c) {
		case 'r':
			cout << "red" << endl;
			break;
		case 'o':
			cout << "orange" << endl;
			break;
		case 'y':
			cout << "yellow" << endl;
			break;
		case 'v':
			cout << "violet" << endl;
			break;
		case 'g':
			cout << "green" << endl;
			break;
		default:
			cout << "color not found" << endl;
	}
	return 0;
}
