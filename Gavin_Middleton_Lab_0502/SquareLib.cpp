#include <iostream>
#include "SquareLib.h"
using namespace std;


Square doubleLength_1(Square s) {
	s.setLength(s.getlength() * 2);
	return s;
}

void doubleLength_2(Square& s) {
	s.setLength(s.getlength() * 2);
}

void doubleLength_3(Square* s) {
	s->setLength(s->getlength() * 2);
}