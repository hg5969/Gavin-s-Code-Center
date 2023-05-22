#include <iostream>
#include "RectangleType.h"
using namespace std;


void RectangleType::setLength(float l) {
	length = l;
}

void RectangleType::setWidth(float w) {
	width = w;
}

float RectangleType::getLength() const {
	return length;
}

float RectangleType::getWidth() const {
	return width;
}

float RectangleType::getArea() const {
	return getLength() * getWidth();
}

RectangleType::RectangleType(float l = 0, float w = 0) {
	setLength(l);
	setWidth(w);
}

RectangleType RectangleType::operator+(const RectangleType& R3) {
	RectangleType temp;
	temp.length = length + R3.length;
	temp.width = width + R3.width;
	return temp;
}

RectangleType operator-(const RectangleType& R2, const RectangleType& R3) {
	RectangleType temp;
	temp.length = R2.length - R3.length;
	temp.width = R2.width - R3.width;
	return temp;
}