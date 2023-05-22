#include <iostream>
#include <cmath>
#include "CircleType.h"
using namespace std;


void CircleType::setRadius(float r) {
	radius = r;
}

float CircleType::getRadius() const {
	return radius;
}

float CircleType::getArea() const {
	return 3.14159 * getRadius() * getRadius();
}

CircleType::CircleType(float r = 0) {
	setRadius(r);
}

CircleType operator+(const CircleType& S2, const CircleType& S3) {
	CircleType newCircle;
	newCircle.setRadius(S2.getRadius() + S3.getRadius());
	return newCircle;
}

CircleType CircleType::operator-(const CircleType& S3) {
	CircleType newCircle;
	newCircle.setRadius(abs(radius - S3.getRadius()));
	return newCircle;
}