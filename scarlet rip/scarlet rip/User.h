#ifndef JED_USER_CLASS_H
#define JED_USER_CLASS_H

class User {
public:
	User(int UPower, int UHP) {
		this->UPower = UPower;
		this->UHP = UHP;
	}
	int UPower;
	int UHP;
	int getUHP();
};

#endif