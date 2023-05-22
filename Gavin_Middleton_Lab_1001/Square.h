#pragma once
#include <iostream>
using namespace std;


class Square {
	float length;
public:
	void setLength(float l);
	float getLength() const;
	float getArea() const;
	Square(float l);
	float operator + (Square& obj) {
		return length + obj.length;
	}
	float operator * (Square& obj) {
		return (length + obj.length) / 2;
	}
};