#include "Rectangle.h"
#include <iostream>

using namespace std;

int main() {

	Rectangle rect = Rectangle();

	int height;
	int width;

	cout << "Height: ";
	cin >> height;
	cout << "Width: ";
	cin >> width;
	cout << endl;

	rect.setHeight(height);
	rect.setWidth(width);

	cout << "Perimeter: " << rect.perimeter() << endl;
	cout << "area: " << rect.area() << endl;
	

}