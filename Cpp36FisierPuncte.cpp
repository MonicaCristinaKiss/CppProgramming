#include <iostream>
#include <fstream>
using namespace std;

int getCadran();
void afiseaza(int);

int main() {
	int cadran;
	cadran=getCadran();
	while(cadran!=0) {
		switch(cadran) {
			case 1:
				afiseaza(1);
				break;
				case 2:
				afiseaza(2);
				break;
				case 3:
				afiseaza(3);
				break;
				case 4:
				afiseaza(4);
				break;
		}
		cadran=getCadran();
	}
	return 0;
}

int getCadran() {
	int choice;
	cout << "\nalegeti cadranul 1,2,3 sau 4:" << endl;
	cout << "introduceti 0 pentru a iesi" << endl;
	cin >> choice;
	return choice;
}

void afiseaza(int i) {
	ifstream obFile("Cpp36Puncte.txt");
	int x, y;
	if(i==1) {
		while(obFile>>x>>y) {
			if((x>=0)&&(y>=0)) {
				cout <<x<<" "<<y<<endl;
			}
		}
	}
	if(i==2) {
		while(obFile>>x>>y) {
			if((x<0)&&(y>=0)) {
				cout <<x<<" "<<y<<endl;
			}
		}
	}
	if(i==3) {
		while(obFile>>x>>y) {
			if((x<0)&&(y<0)) {
				cout <<x<<" "<<y<<endl;
			}
		}
	}
	if(i==4) {
		while(obFile>>x>>y) {
			if((x>=0)&&(y<0)) {
				cout <<x<<" "<<y<<endl;
			}
		}
	}
}
