#pragma once
#include <iostream>
using namespace std;


class PrivateCircle {
private:
	float radius;
public:
	void setRadius(float r);
	float getRadius() const;
	float getPerimeter() const;
	float getArea() const;
	PrivateCircle(float r = 0);
};