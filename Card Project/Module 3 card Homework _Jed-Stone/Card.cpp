#include "Card.h"
#include <iostream>
#include <string>

using namespace std;

//Converts the number entered into a card num or face card

char Card::numConvertor()
{
	switch (this->cardNum)
	{
	case 1:
		return 'A';
	case 2:
		return '2';
	case 3:
		return '3';
	case 4:
		return '4';
	case 5:
		return '5';
	case 6:
		return '6';
	case 7:
		return '7';
	case 8:
		return '8';
	case 9:
		return '9';
	case 11:
		return 'J';
	case 12:
		return 'Q';
	case 13:
		return 'K';
		
	};

}

//Code given would not work wiht 10 because switch cases do not suporrt strings therfore since 10 is not a char it print 0 this is to combat that


char Card::suitConvertor()
{//Converts a number into a suit
	switch (this->suit)
	{
	case 1:
		return 'C';
	case 2:
		return 'D';
	case 3:
		return 'S';
	case 4:
		return 'H';
	default:
		return '0';
	};
}

void Card::comparsion(Card* obj)
{// Check to see if the card is valid and if it is the function will check to see which card is higher.
	if (this->cardNum >= 14 or this->cardNum <= 0 or this->suit > 4 or this->suit <= 0) {
		cout << "Incorrct input was received \n";
	}
	//May LOOK LIKE DUPLICATE CODE BUT IS NOT IT IS MEANT TO COUNTER THE NUMBER CONVERTOR FUNCTION BEING CHAR AND SWITCH CASES NOT BEING ABLE TO ACCEPT STRINGS
	else if (this->cardNum == 10) {
		cout << "\n|| D means diamonds|| S means Spades|| C mean Clubs || H means  Hearts ||";

		cout << "\n*** You have drawn an " << 10 << " of " << this->suitConvertor() << " ***" << endl; 
		cout << "*** The dealer has drawn an " << obj->numConvertor() << " of  " << obj->suitConvertor() << " ***" << endl;

		if (this->cardNum > obj->cardNum) {
			cout << "*** The Your card: " << 10 << " of " << this->suitConvertor() << " has beat The Dealer's card: " << obj->numConvertor() << " of " << obj->suitConvertor() << " ***" << endl;
			cout << "\n|| D means diamonds|| S means Spades|| C mean Clubs || H means  Hearts ||";}

		else if (this->cardNum < obj->cardNum)
		{
			cout << "\n|| D means diamonds|| S means Spades|| C mean Clubs || H means  Hearts ||";

			cout << "\n*** You have drawn an " << 10 << " of " << this->suitConvertor() << " ***" << endl;
			cout << "*** The dealer has drawn an " << obj->numConvertor() << " of  " << obj->suitConvertor() << " ***" << endl;
			cout << "*** The Dealers card: " << obj->numConvertor() << " of " << obj->suitConvertor() << " has beat your card: " << 10 << " of " << this->suitConvertor() << " ***" << endl;
		}
	}
	//ANYTHING ELSE BUT 10 get figured here
	else if (this->cardNum > obj->cardNum)  {
		cout << "\n|| D means diamonds|| S means Spades|| C mean Clubs || H means  Hearts ||";

		cout << "\n*** You have drawn an " << this->numConvertor() << " of " << this->suitConvertor() << " ***" << endl;
		cout << "*** The dealer has drawn an " << obj->numConvertor() << " of  " << obj->suitConvertor() << " ***" << endl;
		cout << "*** The Your card: " << this->numConvertor() << " of " << this->suitConvertor() << " has beat The Dealer's card: " << obj->numConvertor() << " of " << obj->suitConvertor() << " ***" << endl;
		cout << "\n|| D means diamonds|| S means Spades|| C mean Clubs || H means  Hearts ||";
	}
	else if (this->cardNum < obj->cardNum)
	{
		cout << "\n|| D means diamonds|| S means Spades|| C mean Clubs || H means  Hearts ||";

		cout << "\n*** You have drawn an " << this->numConvertor() << " of " << this->suitConvertor() << " ***" << endl;
		cout << "*** The dealer has drawn an " << obj->numConvertor() << " of  " <<  obj->suitConvertor() << " ***" << endl;
		cout << "*** The Dealers card: " << obj->numConvertor() << " of " <<  obj->suitConvertor()<<  " has beat your card: " << this->numConvertor() << " of " << this->suitConvertor() << " ***" << endl;
	}


}
