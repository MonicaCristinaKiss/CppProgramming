#include <iostream>
using namespace std;

int main() {
	int matrice[2][3]={{1,2,3},{6,7,8}};
	
	for(int i=0;i<2;i++) {
		for(int j=0;j<3;j++) {
			cout << matrice[i][j] << " ";
		}
		cout << endl;
	}	
	return 0;
}
