#include <iostream>
using namespace std;

template <class C>
class Moni2 {
	public:
		Moni2(C x) {
			cout << x << " is not a character" << endl;
		}
};

template <> // specilized template
class Moni2 <char> {
	public:
		Moni2(char x) {
			cout << x << " is indeed a character" << endl;
		}
};

template <class T>
class Moni {
	T first, second;
	public:
		Moni(T a,T b) {
			first=a;
			second=b;
		}
		T bigger();
};

template <class T>
T Moni<T>::bigger() {
	return (first>second?first:second);
}

int main() {
	Moni <int> obj1(27,18);
	cout << obj1.bigger() << endl;
	Moni2 <int> obj2(7);
	Moni2 <float> obj3(53.74);
	Moni2 <char> obj4('l');
	
	return 0;
}
