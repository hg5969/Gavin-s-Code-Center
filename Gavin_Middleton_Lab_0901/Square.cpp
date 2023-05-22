#include <iostream>
#include "Square.h"
using namespace std;


void Square::setLength(float L) {
	length = L;
}

float Square::getLength() const {
	return length;
}

float Square::getArea() const {
	return length * length;
}