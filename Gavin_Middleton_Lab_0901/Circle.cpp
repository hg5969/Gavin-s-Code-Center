#include <iostream>
#include "Circle.h"
using namespace std;


void Circle::setRadius(float r) {
	radius = r;
}

float Circle::getRadius() const {
	return radius;
}

float Circle::getArea() const {
	return 3.1415 * radius * radius;
}