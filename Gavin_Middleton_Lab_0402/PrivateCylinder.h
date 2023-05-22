#pragma once
#include <iostream>
#include "PrivateCircle.h"
using namespace std;


class PrivateCylinder:public PrivateCircle{
private:
	float height;
public:
	void setHeight(float h);
	float getHeight() const;
	float getArea() const;
	float getVolume() const;
	PrivateCylinder(float r = 0, float h = 0);
};