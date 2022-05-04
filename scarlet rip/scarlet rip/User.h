#ifndef SCARLET_USER_CLASS_H
#define SCARLET_USER_CLASS_H

class User {
public:
	User(int UPower, float UHP, int maxHP) {
		this->UPower = UPower;
		this->UHP = UHP;
		this->maxHP = maxHP;
	}
	int UPower;
	float UHP;
	int maxHP;
};

#endif