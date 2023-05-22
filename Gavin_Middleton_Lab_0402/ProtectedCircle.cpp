#include <iostream>
#include "ProtectedCircle.h"
using namespace std;


void ProtectedCircle::setRadius(float r) {
	if (r >= 0) {
		radius = r;
	}
	else {
		radius = 0;
	}
}

float ProtectedCircle::getRadius() const {
	return radius;
}

float ProtectedCircle::getPerimeter() const {
	return (2 * 3.14159 * radius);
}

float ProtectedCircle::getArea() const {
	return (3.14159 * radius * radius);
}

ProtectedCircle::ProtectedCircle(float r) {
	setRadius(r);
}
