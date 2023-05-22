// Gavin_Middleton_Lab_0501.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "RectangleType.h"
using namespace std;


int main()
{
	int x0;
	int y0;
	int x1;
	int y1;

	
	cout << "Rectangle App!\n";
	cout << "----------------------\n";
	cout << "Enter x0 and y0: ";
	cin >> x0 >> y0;
	cout << "\nEnter x1 and y1: ";
	cin >> x1 >> y1;


	RectangleType r(x0, y0, x1, y1);


	cout << "Rectangle Information: " << endl;
	cout << "Width: " << r.getWidth() << endl;
	cout << "Length: " << r.getLength() << endl;
	cout << "Perimeter: " << r.getPerimeter() << endl;
	cout << "Area: " << r.getArea() << endl;
}