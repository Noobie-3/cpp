#ifndef JED_CARD_H
#define JEDCARD_h

class Card {
public:
	Card(int cardNum, int suit) {
		this->cardNum = cardNum;
		this->suit = suit;
	}

	int suit;
	int cardNum;
	char numConvertor();
	char suitConvertor();
	void comparsion(Card*);


private:

protected:
};

#endif