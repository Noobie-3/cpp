#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Card.h"

using namespace std;

int main() {
	cout << "~~~Welcome to the Game~~~\n\n\n"; 
	int cardNum = 0;
	int suit = 0;
	cout << "1 = Ace||2 = 2||11-13 = J-K ect.||\n\n ";
	cout << "Enter a card (1-12): " << endl;
	cin >> cardNum;
	cout << "\n1 = Clubs||2 = Diamonds|| 3 = Spades|| 4 = Hearts||\n";
	cout << "Enter a suit(1-4):  \n";
	cin >> suit;

	Card card = Card(cardNum, suit);

	srand(time(0));
	cardNum = rand() % 13 + 2;
	suit = rand() % 4 + 1;
	Card compCard = Card(cardNum, suit);

	card.comparsion(&compCard);

} 