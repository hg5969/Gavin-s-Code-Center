#include <iostream>
#include "Square.h"
using namespace std;


void Square::setLength(float l) {
	length = l;
}

float Square::getLength() const {
	return length;
}

float Square::getArea() const {
	return length * length;
}

Square::Square(float l = 0) {
	length = l;
}