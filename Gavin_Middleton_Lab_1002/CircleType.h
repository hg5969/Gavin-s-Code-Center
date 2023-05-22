#pragma once
#include <iostream>
using namespace std;


class CircleType {
	float radius;
public:
	void setRadius(float r);
	float getRadius() const;
	float getArea() const;
	CircleType(float r);
	friend CircleType operator+(const CircleType& S2, const CircleType& S3);
	CircleType operator-(const CircleType& S3);
};