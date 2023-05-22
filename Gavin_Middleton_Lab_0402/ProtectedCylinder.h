#pragma once
#include <iostream>
#include "ProtectedCircle.h"
using namespace std;


class ProtectedCylinder:public ProtectedCircle {
protected:
	float height;
public:
	void setHeight(float h);
	float getHeight() const;
	float getArea() const;
	float getVolume() const;
	ProtectedCylinder(float r = 0, float h = 0);
};