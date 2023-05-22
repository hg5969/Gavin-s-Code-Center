#pragma once
#include <iostream>
using namespace std;


class Square {
private:
	float le;
public:
	void setLength(float L);
	float getlength() const;
	float getArea() const;
	Square(float L = 0);
};