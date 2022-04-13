#ifndef RECTANGLE_JED_H
#define RECTANGLE_JED_H

class Rectangle {
public:
	int height = 0;
	int width = 0;
	int perimeter();
	int area();

	void setHeight(int height) {
		this->height = height;
	}

	int getHeight() {
		return height;
	}

	void setWidth(int width) {
		this->width = width;
	}

	int getwidth() {
		return width;
	}
};


#endif