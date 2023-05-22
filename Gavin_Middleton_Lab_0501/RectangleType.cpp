#include <iostream>
#include "RectangleType.h"
#include <cmath>
using namespace std;


int RectangleType::getX0() {
	return p0->getX();
}

int RectangleType::getY0() {
	return p0->getY();
}

int RectangleType::getX1() {
	return p1->getX();
}

int RectangleType::getY1() {
	return p1->getY();
}

int RectangleType::getWidth() {
	return (abs(getY1() - getY0()));
}

int RectangleType::getLength() {
	return (abs(getX1() - getX0()));
}

int RectangleType::getPerimeter() {
	return ((getWidth() + getLength()) * 2);
}

int RectangleType::getArea() {
	return (getWidth() * getLength());
}

RectangleType::RectangleType(int ax0, int ay0, int ax1, int ay1) {
	p0 = new Point2D(ax0, ay0);
	p1 = new Point2D(ax1, ay1);
}