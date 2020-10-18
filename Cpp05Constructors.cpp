#include <iostream>
#include <string>
using namespace std;

class MonicasClass {
	public:
		MonicasClass(string z) {
			setName(z);
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
	MonicasClass monicasObject("Monica");
	cout << monicasObject.getName();
	MonicasClass Object("Obiect");
	cout << Object.getName();
	return 0;
}
