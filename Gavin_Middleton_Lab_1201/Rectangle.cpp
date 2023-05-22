#include <iostream>
#include "Rectangle.h"
#include "Exception.h"
using namespace std;


void Rectangle::setLength(double _length) {
	if (_length >= 1 && _length <= 50) {
		length = _length;
	}
	else {
		InvalidMeasureException("length");
	}
}

void Rectangle::setWidth(double _width) {
	if (_width >= 1 && _width <= 20) {
		width = _width;
	}
	else {
		InvalidMeasureException("width");
	}
}

double Rectangle::getLength() const {
	return length;
}

double Rectangle::getWidth() const {
	return width;
}

Rectangle::Rectangle(double _length, double _width) {
	setLength(_length);
	setWidth(_width);
}