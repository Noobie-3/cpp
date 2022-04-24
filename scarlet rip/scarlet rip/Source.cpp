#include <iostream>
#include <random>
#include <ctime>
#include <cstdlib>
#include "other.h"
#include "User.h"
#include <vector>
using namespace std;

int Oattack(int &PHP, int &OPower) {
	cout << PHP << endl;
	PHP = (PHP - OPower);
	cout << PHP << endl;
	return PHP;
}

int Uattack(int &OHP, int &UPower) {
	cout << OHP << endl;
	OHP = (OHP - UPower);
	cout << OHP << endl;
	return OHP;
}

void battle(User &player, Other &other) {
	while (player.UHP > 0 and other.OHP > 0) {
		Uattack(other.OHP,player.UPower);
		Oattack(player.UHP, other.OPower);
		cout << "User Hp is " << player.UHP <<  " OtherHp is "<< other.OHP << endl;
	}
}


int main() {

	bool win = false;
	while (win == false) {
		 


		//uses randomness to decide your encounter
		vector<int> list{ 6, 5, 0, 2 };
		srand(time(0));  // Initialize random number generator.
			int RandomNum = (rand() % 4) + 1;
			cout << (rand() % 4) + 1 << " ";
			//Delcaring the difffernt others you can face
			Other other1(1, 10);
			Other other2(2,20);
		
			Other other3(3,27);
			Other other4(8,40);

			//use switch case to "summon" differnt enemies NOT YET DONE NEED HELP
			


		User player1(9, 63);

		battle(player1, other1);



		int keep = true;

		if (keep == true) {
			break;
		}



	}
}