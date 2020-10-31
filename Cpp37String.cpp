#include <iostream>
#include <string> // string functions
using namespace std;

int main() {
	string prop, prop2; // strings are array of characters
	getline(cin, prop);
	prop2.assign(prop);
	cout << "the entered string is "<<prop<<endl;
	cout <<prop2<<endl;
	string prop3="This is a sentence";
	for(int i=0;i<prop3.length();i++) {
		cout <<prop3.at(i);
	}
	cout <<"\n"<<prop3.substr(8,10) << endl;
	cout << prop2 << prop3<<endl;
	prop2.swap(prop3);
	cout << prop2 << prop3<<endl;
	string prop4("ce te legeni codrule fara ploaie fara vant");
	cout << prop4<< endl;
	cout << prop4.find("fara") << endl;
	cout << prop4.rfind("fara") << endl;
	// prop4.erase(20);
	prop4.replace(prop4.find("fara"),4,"cu");
	cout << prop4<< endl;
	prop2.insert(prop2.find("sen"), "cool ");
	cout << prop2<< endl;
	return 0;
}
