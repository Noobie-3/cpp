#ifndef JED_BRANCH_H
#define JED_BRANCH_H
#include "Tree.h"


class Branch : public Tree {
private:
	int length = 0;

	Branch branch();
public:
	Branch(int length) 
	{
		this->length = length;
	};
	Branch() {

	};
	int getLength();
	void grow(int);




};





#endif