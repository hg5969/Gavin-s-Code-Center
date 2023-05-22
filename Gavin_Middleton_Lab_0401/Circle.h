#pragma once
#include <iostream>
using namespace std;


class Circle {
private:
	float radius;
public:
	void setRad(float r);
	float getRad() const;
	float getArea() const;
	Circle(float rad = 0);
};
