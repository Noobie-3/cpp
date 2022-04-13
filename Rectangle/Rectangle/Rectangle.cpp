#include "Rectangle.h"

int Rectangle::perimeter()
{
	return (height + width) * 2;
}

int Rectangle::area()
{
	return (height * width);
}
