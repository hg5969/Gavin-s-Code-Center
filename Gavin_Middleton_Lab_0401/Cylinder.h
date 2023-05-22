#pragma once
#include <iostream>
#include "Circle.h"
using namespace std;


class Cylinder : public Circle {
private:
	float height;
public:
	void setHeight(float h);
	float getHeight() const;
	float getArea() const;
	float getVol() const;
	Cylinder(float r = 0, float h = 0);
};
