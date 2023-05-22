#include <iostream>
#include <cmath>
#include "Edge_E.h"
using namespace std;


float Edge_E::getDistance() const {
	return sqrt(pow(getP0()->getX() - getP1()->getX(), 2) + pow(getP0()->getY() - getP1()->getY(), 2));
}