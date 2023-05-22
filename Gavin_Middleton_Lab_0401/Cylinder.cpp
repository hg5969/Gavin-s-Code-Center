#include <iostream>
#include "Cylinder.h"
#include "Circle.h"
using namespace std;


void Cylinder::setHeight(float h) {
	float height = h;
}

float Cylinder::getHeight() const {
	return height;
}

float Cylinder::getArea() const {
	return ((2 * 3.1415 * getRad() * height) + (2 * 3.1415 * getRad() * getRad()));
}

float Cylinder::getVol() const {
	return (3.1415 * getRad() * getRad() * height);
}

Cylinder::Cylinder(float r, float h): Circle(r) {
	height = h;
}