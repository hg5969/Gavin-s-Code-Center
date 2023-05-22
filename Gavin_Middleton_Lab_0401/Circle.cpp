#include <iostream> 
#include "Circle.h"
using namespace std;


void Circle::setRad(float rad) {
	float radius = rad;
}

float Circle::getRad() const{
	return radius;
}

float Circle::getArea() const {
	return (3.1415 * radius * radius);
}

Circle::Circle(float rad) {
	radius = rad;
}