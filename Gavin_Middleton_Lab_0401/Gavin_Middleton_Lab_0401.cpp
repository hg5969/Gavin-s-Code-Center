// Gavin_Middleton_Lab_0401.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cylinder.h"
using namespace std;


int main()
{
    cout << "Cylinder App!!\n";
    cout << "---------------------------\n";

    float radius;
    cout << "Enter Radius: ";
    cin >> radius;

    float height;
    cout << "Enter Height: ";
    cin >> height;


    Cylinder cylinder = Cylinder(radius, height);
    cout << "Cylinder Area: " << cylinder.getArea() << endl;
    cout << "Cylinder Volume: " << cylinder.getVol() << endl;


    return 0;
}


