#include <iostream>
#include <string>
using namespace std;

class MonicasClass {
	public: //acces specifier
		void saySmth() {
			cout << "Today is a good day" << endl;
		}
		void setName(string x) {
			name=x;
		}
		string getName() {
			return name;
		}
	private:
		string name;
};

int main() {
	MonicasClass monicasObject;
	monicasObject.saySmth();
	monicasObject.setName("Ms Monica");
	cout << monicasObject.getName();
	return 0;
}
