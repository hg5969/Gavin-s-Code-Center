#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;


class Circle : public Shape {
	float radius;
public:
	void setRadius(float r);
	float getRadius() const;
	float getArea() const;
};