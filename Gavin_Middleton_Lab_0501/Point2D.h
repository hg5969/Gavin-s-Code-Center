#pragma once
#include <iostream>
using namespace std;


class Point2D {
private:
	int x, y;
public:
	int getX();
	int getY();
	Point2D(int ax, int ay);
};