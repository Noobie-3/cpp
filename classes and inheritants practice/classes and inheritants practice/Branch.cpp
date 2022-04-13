#include "Branch.h"

int Branch::getLength()
{
	return this->length;
}

Branch Branch::branch()
{
	return Branch();
}

void Branch::grow(int amount = 10)
{
	length += amount;
}
