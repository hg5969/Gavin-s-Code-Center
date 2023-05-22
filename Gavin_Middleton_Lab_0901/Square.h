#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;


class Square : public Shape {
	float length;
public:
	void setLength(float L);
	float getLength() const;
	float getArea() const;
};