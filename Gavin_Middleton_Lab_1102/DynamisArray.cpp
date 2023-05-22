#include "DynamicArray.h"
#include <iostream>
using namespace std;


void DynamicArray::addElement(int e) {
	if (position < maximumSize) {
		elements[position++] = e;
	}
}

int DynamicArray::getElement(int p) const {
	return elements[p];
}

int DynamicArray::getSize() const {
	return position;
}

DynamicArray::DynamicArray(int s) : maximumSize(s), position(0) {
	elements = new int[s];
}