#include <iostream>
#include <random>
#include <ctime>
#include <cstdlib>
#include "other.h"
#include "User.h"
#include <vector>
using namespace std;

int Oattack(int &UHP, int &OPower) {
	UHP = (UHP - OPower);
	cout << "The enemy attacks and deals " << OPower << "DAMAGE" << endl;

	return UHP;
}

int Uattack(int &OHP, int &UPower) {
	OHP = (OHP - UPower);
	cout << "test"; 
	return OHP;
}
int Defend(int &UHP, int OPower) {
	UHP = (UHP - (OPower - (OPower * .75)));
	cout << "Your hp is now " << UHP;
	return UHP;
}
void BrainDrive() {

}

void battle(User &player, Other &other) {
	while (player.UHP > 0 and other.OHP > 0) {
		cout << "what would you like to do ? \N||1=fight 2 = defend(75% less damage) or 3 = BRAIN DRIVE() +50% damage";
		int choice;
		cin >> choice;
		while ((choice != 1) && (choice != 2) && (choice != 3) && (choice != 4)) {
			cout << "INVALID CHOICE please choice again";
			cin >> choice;
		}
		//attack function if attack is chosen
		if (choice == 1) {
			Uattack(other.OHP, player.UPower);
			Oattack(player.UHP, other.OPower);
			cout << "User Hp is " << player.UHP << " OtherHp is " << other.OHP << endl;
			cout << "what would you like to do ? \N||1=fight 2 = defend(75% less damage) or 3 = BRAIN DRIVE() +50% damage";
			cout << "HElllllo";
		}
		else if (choice == 2) {
			Defend(player.UHP, other.OPower);
		}
		else if (choice == 3) {

		}
		else if (choice == 4) {

		}


		
	}
}


int main() {

	bool win = false;
	while (win == false) {
		 


		//uses randomness to decide your encounter
		vector<int> list{ 6, 5, 0, 2 };
		srand(time(0));  // Initialize random number generator.
			int RandomNum = (rand() % 4) + 1;
			//Delcaring the difffernt others you can face
			Other other1(100, 10);
			Other other2(2,20);
			Other other3(3,27);
			Other other4(8,40);

			//use switch case to "summon" differnt enemies NOT YET DONE NEED HELP
			


		User player1(9, 63);

		battle(player1, other1);



		int keep = false;

		if (keep == false) {
			break;
		}



	}
}