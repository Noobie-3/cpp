#include <iostream>
using namespace std;

struct bus {
	int numOfWheels;
	int amountOfMagic;
	int numOfWindows;
	string WordsOnTheSideOfBus;
	
	int magic() {
		bus MagicalPower;
		cin >> MagicalPower.amountOfMagic;
		while (MagicalPower.amountOfMagic < 20) {
			cout << "Amount can not be less than 20";
			cin >> MagicalPower.amountOfMagic;
			if (MagicalPower.amountOfMagic >= 20) {
				continue;
			}
		}
		while (MagicalPower.amountOfMagic >= 20) {
			char YorN;
			cout << "Do you wanna telaport? y or n ";
			cin >> YorN;
			if (YorN == 'y') {
				cout << "What direction(east west south north) ";
				string direction;
				cin >> direction;
				cout << "You have telaported 200 miles to the " << direction <<" RIGHT INTO AN ENEYMY CAMP AND almost DIED ";
				MagicalPower.amountOfMagic = MagicalPower.amountOfMagic - 20;
			}
			if (YorN == 'n' or MagicalPower.amountOfMagic < 20) {
				cout << "\n\nYOUR BUS BLEW UP BECAUSE THE MAGIC HAS RUN OUT\n HAVE FUN DEAD（＾＿・) ";
				break;
			}

		}
		return MagicalPower.amountOfMagic;

	}

	int Tires() {
		bus wheels;
		cout << "How many wheels does your car have? ";
		cin >> wheels.numOfWheels;
		if (wheels.numOfWheels == 0) {
			cout << "You....You..WHAT HOW DO YOU NOT HAVE WHEELS LIKE DUDE.. A CAR IS NOT A CAR WITHOUT WHEELS.\n GET YOUR FREAKING BRAIN CHECKED. JUST FOR THAT IM NOT LETTING YOU CONTINUE THE PROGRAM\n GOOD BYE AND GOOD RIDDENS ...(some people in this world makes me which  was never wrote)";
		}
		if (wheels.numOfWheels == 2) {
			cout << "You Have a BIus";
		}
		if (wheels.numOfWheels == 3) {
			cout << "Your have A TRIbus";
		}
		if (wheels.numOfWheels > 4) {
			cout << "\nTHATS NOT A CAR, THATS THE MAGICAL SCHOOL BUS *WINK*" << endl << "How much magic would you like to fill your car with? (each telaport cost 20) ";
			magic();
		}
		return wheels.numOfWheels;
	}
};

int main() {
	bus magic;
	magic.Tires();

}