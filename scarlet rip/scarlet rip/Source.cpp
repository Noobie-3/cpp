#include <iostream>
#include <random>
#include <ctime>
#include <cstdlib>
#include "other.h"
#include "User.h"
#include <vector>
#include <stdlib.h>
using namespace std;

int DriveTurnsLeft = 0;
bool lose = false;
bool win = false;

//the others attack 
int Oattack(int &UHP, int &OPower) {
	UHP = (UHP - OPower);
	cout << "\nThe Other attacks and deals " << OPower << "DAMAGE" << endl;

	return UHP;
}

//the players attack
int Uattack(int& OHP, int& UPower) {
	//if brain drive is active
	if (DriveTurnsLeft > 0) {
		OHP = (OHP - (UPower * 1.15));
		cout << "\nYou draw your weapon and attack the Other doing " << (UPower * 1.15)<< " DAMAGE\n";
	}
	//if it is not active
	else {
		OHP = (OHP - UPower);
		cout << "\nYou draw your weapon and attack the Other doing " << UPower<< " DAMAGE\n";

		return OHP;
	}
}
//if the player decided to defend
int Defend(int &UHP, int OPower) {
	UHP = (UHP - (OPower - (OPower * .25)));
	cout << "\nThe Other attacked and did " << (OPower * .25) << " damage\n";
	return UHP;
}
//takes away one turn of braindrive every time its called when none are left brain drive is no longer active
void BrainDriveTurn() {
	if (DriveTurnsLeft >= 1) {
		DriveTurnsLeft = (DriveTurnsLeft - 1);
	}
}
//Heals the player for 20% of their max Hp
void heal(int &UHP, int &maxHP) {
	UHP = (UHP + (maxHP * .20));
	if (UHP > maxHP) {
		UHP = maxHP;
	}
}

//main battle 
void battle(User &player, Other &other) {
	//checks to see if either characters hp is 0 or below
	while ((player.UHP > 0) && (other.OHP > 0)&& (lose == false)) {
		cout << "\nwhat would you like to do ? \n|| 1=fight || 2 = defend(75% less damage) || 3 = BRAIN DRIVE(15% more damage for you for three turns) || 4 = heal 20% ||";
		int choice;
		cin >> choice;
		//input validation
		while ((choice != 1) && (choice != 2) && (choice != 3) && (choice != 4)) {
			cout << "INVALID CHOICE please choice again\n";
			cin >> choice;
		}
		//attack choice
		if (choice == 1) {
			Uattack(other.OHP, player.UPower);
			Oattack(player.UHP, other.OPower);
			cout << "\n\nUser Hp is " << player.UHP << " OtherHp is " << other.OHP << endl;
			BrainDriveTurn();
			cout << "\n\n\n\n\n";
		}
		//DEFEND choice
		else if (choice == 2) {
			Defend(player.UHP, other.OPower);
			BrainDriveTurn();
			cout << "\n Your Hp is now " << player.UHP << "Health and the others HP is now " << other.OHP << "\n\n\n\n\n";

		}
		//Brain dive choice
		else if (choice == 3) {
			if (DriveTurnsLeft > 0) {
				cout << "\nYou already have it active it could overload your brain if used again so soon\n";
				Oattack(player.UHP, other.OPower);
				cout << "\n Your Hp is now " << player.UHP << "Health and the others HP is now " << other.OHP << "\n\n\n\n\n";
				continue;
			}
			else if (DriveTurnsLeft == 0) {
				DriveTurnsLeft = 3;
				cout << "\nYou call forth the power of Brain Drive +15% attack for three turns\n";
				Oattack(player.UHP, other.OPower);
				cout << "\n Your Hp is now " << player.UHP << " and the others HP is now " << other.OHP<< "\n\n\n\n\n";

			}
		}//Healing
		else if (choice == 4) {
			heal(player.UHP, player.maxHP);
			BrainDriveTurn();
			cout << "\nYou now have " << player.UHP << "HP";
			Oattack(player.UHP, other.OPower);
		}


		
	}
}


int main() {
	system("Color 0B");
	bool win = false;
	while (win == false) {
		 
		//small story
		cout << "The city was always peacful, Nothing to do but a repetive life; Go to work, come home and sleep then do it all over the next day. That was until one day when everything changed!! The day that the Others appeared and started devoring any humans brain they could find. The others seemed to come from nowhere, but as scientist studied the ominious creatures more and more they soon discovered a new matierial that keeps falling from the cosmos. They called this new substance the Other Partical. It had the abilty to transform any organic substance into an other, Humans, animals, or even plants would all be turned into a horrifying others. As the populatiion dwindled they people decided that enough was enough and started gatthering volunteers to have powers implented into their brains so that they could begin to fight the others. They had found in their research that the only way to combat the Others was to use brain power verses them And so the SAS system was created to help the powered up individuals connect to one another and become stronger in battle and use the power that somone else posesses. And so the people began to fight back vs the Others and they got good at it. The others started becoming more and more powerful and so the cycle of training and killing of others began[could do more and might later but for now thats enough story]\n\n";
		

		//uses randomness to decide your encounter
		vector<int> list{ 1,2,3 };  // Initialize random number generator.
			int RandomNum = (rand() % list.size());
			//Delcaring the difffernt others you can face
			Other other1(1, 10);
			Other other2(2,20);
			Other other3(3,27);
			Other other4(8,40);

			//Your player
	 		User player1(1, 40, 40);
			cout << "if you wish to make the encounters more easy change your attack now[default is 5]";
			cin >> player1.UPower;
			//use switch case to "summon" differnt enemies
			cout << "a random encounter has apeared \n";
			switch (RandomNum) {
			case 1:
				cout << "\nA weak monster has appeared\n";
				battle(player1, other1);
				break;
			case 2:
				cout << "\na slightly hard monster has apeared\n";
				battle(player1, other2);
				break;
			case 3:cout << "\nA  very EVil presance is felt \n";
				battle(player1, other3);
				break;
			case 4:
				cout << "\nWHO DARES CHALLANGE A BEAST OF MY CALIBER " << "a intense felling knocks you down and you fell sick to your stomach, the beast prepares to kill you and you are almost certainly gonna die\m";
				battle(player1, other4);
				break;
			}


			//checks to see if you won or lost MAKE A FUNCTOIN FOR IT
			
			//play again
		int keep = true;

		cout << "would you like to play the game from the begining again?: yes or no";
		string YesOrNo;
		cin >> YesOrNo;
		while ((YesOrNo != "yes") && (YesOrNo !="no")) {
			cout << "invalid choice try again";
			cin >> YesOrNo;
		}
		if (YesOrNo == "yes") {
			continue;
		}
		
		else if (YesOrNo == "no") {
			keep = false;
		}

		if (keep == false) {
			break;
		}



	}
}