#include <iostream>
#include "Square.h"
using namespace std;


void Square::setLength(float L) {
	le = L;
}

float Square::getlength() const {
	return le;
}

float Square::getArea() const {
	return (le * le);
}

Square::Square(float L) {
	le = L;
}