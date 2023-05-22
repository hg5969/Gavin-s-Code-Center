#include <iostream>
#include "PrivateCylinder.h"
using namespace std;


PrivateCylinder::PrivateCylinder(float r, float h) : PrivateCircle(r) {
	setHeight(h);
}

void PrivateCylinder::setHeight(float h) {
	if (h >= 0) {
		height = h;
	}
	else {
		height = 0;
	}
}

float PrivateCylinder::getHeight() const {
	return height;
}

float PrivateCylinder::getArea() const {
	return ((2 * 3.14159 * getRadius() * height) + (2 * 3.14159 * getRadius() * getRadius()));
}

float PrivateCylinder::getVolume() const {
	return (3.14159 * getRadius() * getRadius() * height);
}