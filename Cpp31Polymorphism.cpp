#include <iostream>
using namespace std;

class Enemy {
	protected:
		int attackPower;
		public:
			virtual void attack() {
				cout <<"I am enemy! -"<<attackPower << endl;
			}
			// virtual void attack()=0; pure virtual function
			// an abstract class is a class with a pure virtual function in it
			void setAttackPower(int a) {
				attackPower=a;
			}
};

class Ninja: public Enemy {
	public:
		void attack() {
			cout <<"Ninja attack! -"<<attackPower<<endl;
		}
};

class Monster: public Enemy {
	public:
	/*	void attack() {
			cout <<"Monster attack! -"<<attackPower<<endl;
		} */
};

int main() {
	Ninja n;
	Monster m;
	Enemy *enemy1=&n;
	Enemy *enemy2=&m;
	enemy1->setAttackPower(29);
	enemy2->setAttackPower(45);
	enemy1->attack();
	enemy2->attack();
	return 0;
}
