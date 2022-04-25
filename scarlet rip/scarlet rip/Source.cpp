#include <iostream>
#include <random>
#include <ctime>
#include <cstdlib>
#include "other.h"
#include "User.h"
#include <vector>
using namespace std;

int DriveTurnsLeft = 0;


int Oattack(int &UHP, int &OPower) {
	UHP = (UHP - OPower);
	cout << "The enemy attacks and deals " << OPower << "DAMAGE" << endl;

	return UHP;
}

int Uattack(int& OHP, int& UPower) {
	if (DriveTurnsLeft > 0) {
		OHP = (OHP - (UPower * 1.15));
	}
	else {
		OHP = (OHP - UPower);
		cout << "test";
		return OHP;
	}
}
int Defend(int &UHP, int OPower) {
	UHP = (UHP - (OPower - (OPower * .25)));
	cout << "Your hp is now " << UHP;
	return UHP;
}
void BrainDriveTurn() {
	if (DriveTurnsLeft >= 1) {
		DriveTurnsLeft = (DriveTurnsLeft - 1);
	}
}

void battle(User &player, Other &other) {
	while (player.UHP > 0 and other.OHP > 0) {
		cout << "what would you like to do ? \N||1=fight 2 = defend(75% less damage) or 3 = BRAIN DRIVE(15% more damage for you for three turns)";
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
			BrainDriveTurn();
			cout << DriveTurnsLeft;
		}
		else if (choice == 2) {
			Defend(player.UHP, other.OPower);
			BrainDriveTurn();
		}
		else if (choice == 3) {
			if (DriveTurnsLeft > 0) {
				continue;
			}
			else if (DriveTurnsLeft == 0) {
				DriveTurnsLeft = 3;
			}
		}
		else if (choice == 4) {

			BrainDriveTurn();
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
			Other other1(1, 10);
			Other other2(2,20);
			Other other3(3,27);
			Other other4(8,40);

			//Your player
	 		User player1(1, 63);
			//use switch case to "summon" differnt enemies NOT YET 
			cout << "a random encounter has apeared \n";
			switch (RandomNum) {
			case 1:cout << "A weak monster has appeared";
				battle(player1, other1);

			case 2: cout << "a slightly hard monster has apeared";
				battle(player1, other2);

			case 3:cout << "A  very EVil presance is felt"; battle(player1, other3);

			case 4:cout << "WHO DARES CHALLANGE A BEAST OF MY CALIBER" << "a intense felling knocks you down and you fell sick to your stomach, the beast prepares to kill you and you are almost certainlygonna die";
				//battle(player1, other4);
			}


		int keep = false;

		if (keep == false) {
			break;
		}



	}
}