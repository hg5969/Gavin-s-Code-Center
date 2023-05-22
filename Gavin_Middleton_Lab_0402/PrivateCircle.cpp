#include <iostream>
#include "PrivateCircle.h"
using namespace std;


void PrivateCircle::setRadius(float r) {
	if (r >= 0) {
		radius = r;
	}
	else {
		radius = 0;
	}
}

float PrivateCircle::getRadius() const {
	return radius;
}

float PrivateCircle::getPerimeter() const {
	return (2 * 3.14159 * radius);
}

float PrivateCircle::getArea() const {
	return (3.14159 * radius * radius);
}

PrivateCircle::PrivateCircle(float r) {
	setRadius(r);
}