#pragma once
#include <iostream>
using namespace std;


class InvalidMeasureException {
	string message;
public:
	string what() const;
	InvalidMeasureException(string _measure);
};