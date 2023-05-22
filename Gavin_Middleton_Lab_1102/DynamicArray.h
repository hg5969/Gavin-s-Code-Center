#pragma once
#include <iostream>
using namespace std;


template<class T>class DynamicArray {
private:
	T* elements;
	int maximumSize;
	int position;
public:
	void addElement(T e);
	T getElement(int p) const;
	int getSize() const;
	DynamicArray(int s = 10);
};

template<class T> void DynamicArray<T>::addElement(T e)
{
	if (position < maximumSize) {
		elements[position++] = e;
	}

}

template<class T> T DynamicArray<T>::getElement(int p) const {
	return elements[p];
}

template<class T> int DynamicArray<T>::getSize() const {
	return position;
}

template<class T> DynamicArray<T>::DynamicArray(int s) : maximumSize(s), position(0) {
	elements = new T[s];
} 