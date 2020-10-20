#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	for(int i=1;i<26;i++) {
		cout << (rand()%32)+1 << endl;
	}
	return 0;
}
