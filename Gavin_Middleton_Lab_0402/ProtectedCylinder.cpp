#include <iostream>
#include "ProtectedCylinder.h"
using namespace std;


ProtectedCylinder::ProtectedCylinder(float r, float h) : ProtectedCircle(r) {
	setHeight(h);
}

void ProtectedCylinder::setHeight(float h) {
	if (h >= 0) {
		height = h;
	}
	else {
		height = 0;
	}
}

float ProtectedCylinder::getHeight() const {
	return height;
}

float ProtectedCylinder::getArea() const {
	return ((2 * 3.14159 * radius * height) + (2 * 3.14159 * radius * radius));
}

float ProtectedCylinder::getVolume() const {
	return (3.14159 * radius * radius * height);
}