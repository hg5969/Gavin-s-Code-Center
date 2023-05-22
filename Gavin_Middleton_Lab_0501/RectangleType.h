#pragma once
#include <iostream>
#include "Point2D.h"
using namespace std;


class RectangleType {
private:
	Point2D *p0, *p1;
public:
	int getX0();
	int getY0();
	int getX1();
	int getY1();
	int getWidth();
	int getLength();
	int getPerimeter();
	int getArea();
	RectangleType(int ax0, int ay0, int ax1, int ay1);
};