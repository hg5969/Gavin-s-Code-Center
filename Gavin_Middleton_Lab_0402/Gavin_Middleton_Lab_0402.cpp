// Gavin_Middleton_Lab_0402.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "PrivateCylinder.h"
#include "ProtectedCylinder.h"
using namespace std;

int main()
{
    ProtectedCylinder Protect;
    PrivateCylinder Private;
    float r, h;

    cout << "Cylinder App!\n";
    cout << "------------------------------\n";
    cout << "Enter a radius: ";
    cin >> r;
    cout << "Enter a height: ";
    cin >> h;

    Protect.setRadius(r);
    Protect.setHeight(h);

    cout << "Cylinder area: " << setprecision(3) << fixed << Protect.getArea() << endl;
    cout << "Cylinder Volume: " << setprecision(3) << fixed << Protect.getVolume() << endl;
    cout << "------------------------------\n\n";

    cout << "Enter a radius: ";
    cin >> r;
    cout << "Enter a height: ";
    cin >> h;

    Private.setRadius(r);
    Private.setHeight(h);

    cout << "Cylinder area: " << setprecision(3) << fixed << Private.getArea() << endl;
    cout << "Cylinder Volume: " << setprecision(3) << fixed << Private.getVolume() << endl;
}
