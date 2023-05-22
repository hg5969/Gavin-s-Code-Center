#pragma once
#include <iostream>
using namespace std;


class Point2D {
private:
	int x, y;
public:
	int getX() const;
	int getY() const;
	void setX(int ax);
	void setY(int ay);
	Point2D(int ax, int ay);
};