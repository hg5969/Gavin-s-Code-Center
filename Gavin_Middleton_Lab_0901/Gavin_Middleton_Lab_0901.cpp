// Gavin_Middleton_Lab_0901.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Circle.h"
#include "Square.h"
using namespace std;

int main()
{
    Circle circle;
    Square square;
    int temp1, temp2;

    cout << "Circle and Square App!!\n";
    cout << "-----------------------------\n";
    cout << "\n-Circle:\n" << "\t-Radius of the Circle: ";
    cin >> temp1;
    circle.setRadius(temp1);
    cout << "\t-Area of the Circle: " << circle.getArea() << endl;

    cout << "\n-Square:\n" << "\t-Side Length of the Square: ";
    cin >> temp2;
    square.setLength(temp2);
    cout << "\t-Area of the Square: " << square.getArea() << endl;

}
