#include <iostream>
#include "Point2D.h"
using namespace std;


int Point2D::getX() {
	return x;
}

int Point2D::getY() {
	return y;
}

Point2D::Point2D(int ax, int ay) {
	x = ax;
	y = ay;
}