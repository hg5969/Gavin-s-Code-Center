#pragma once
#include <iostream>
using namespace std;


class RectangleType {
	float length, width;
public:
	void setLength(float l);
	void setWidth(float w);
	float getLength() const;
	float getWidth() const;
	float getArea() const;
	RectangleType(float l, float w);
	RectangleType operator+(const RectangleType& R3);
	friend RectangleType operator-(const RectangleType& R2, const RectangleType& R3);
};