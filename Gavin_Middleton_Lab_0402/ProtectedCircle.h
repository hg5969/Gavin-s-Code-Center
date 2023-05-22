#pragma once
#include <iostream>
using namespace std;


class ProtectedCircle {
protected:
	float radius;
public:
	void setRadius(float r);
	float getRadius() const;
	float getPerimeter() const;
	float getArea() const;
	ProtectedCircle(float r = 0);
};