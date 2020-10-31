#include <iostream>
#include <fstream>
using namespace std;

int main() {
	
	ofstream monicasFile; //outputing data
	// ofstream monicasFile("monica.txt");
	monicasFile.open("monica.txt");
	if(monicasFile.is_open()) {
		cout << "The file is open" <<endl;
	}
	monicasFile << "This is my first file in C++\n";
	cout << "Enter Name, Surname and Age" << endl;
	string name;
	string surname;
	int age;
	cin >>name>>surname>>age;
	monicasFile <<name<< ' ' <<surname<<' '<< age;
	monicasFile.close();
	ifstream monisFile("monica.txt");
	while(monisFile>>name) {
		cout<<name<<" ";
	}
	return 0;
}
