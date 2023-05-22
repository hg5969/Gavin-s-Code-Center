#include <iostream>
#include<cmath>
#include "Edge_M.h"
using namespace std;


float Edge_M::getDistance() const {
	return abs(getP0()->getX() - getP1()->getX()) + abs(getP0()->getY() - getP1()->getY());
}