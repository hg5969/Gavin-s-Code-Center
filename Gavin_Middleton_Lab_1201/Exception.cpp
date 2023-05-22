#include <iostream>
#include "Exception.h"
using namespace std;


string InvalidMeasureException::what() const {
	return message;
}

InvalidMeasureException::InvalidMeasureException(string _measure) {
	cout << "Invalid " << _measure << " value." << endl;
}