// Gavin_Middleton_Lab_1002.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "RectangleType.h"
#include "CircleType.h"
using namespace std;


int main()
{
    RectangleType R1(6, 11);
    RectangleType R2(4, 10);
    RectangleType R3 = R1 + R2;
    RectangleType R4 = R1 - R2;

    cout << "Operator Overloading!\n";
    cout << "----------------------------\n";
    cout << "\nRectangle Objects!\n";
    cout << "R1: { length: " << R1.getLength() << ", width: " << R1.getWidth() << ", area: " << R1.getArea() << " }\n";
    cout << "R2: { length: " << R2.getLength() << ", width: " << R2.getWidth() << ", area: " << R2.getArea() << " }\n";
    cout << "R3: { length: " << R3.getLength() << ", width: " << R3.getWidth() << ", area: " << R3.getArea() << " }\n";
    cout << "R4: { length: " << R4.getLength() << ", width: " << R4.getWidth() << ", area: " << R4.getArea() << " }\n";

    CircleType S1(6);
    CircleType S2(3);
    CircleType S3 = S1 + S2;
    CircleType S4 = S1 - S2;

    cout << "\nCircle Objects!\n";
    cout << "S1: { radius: " << S1.getRadius() << ", area: " << S1.getArea() << " }\n";
    cout << "S2: { radius: " << S2.getRadius() << ", area: " << S2.getArea() << " }\n";
    cout << "S3: { radius: " << S3.getRadius() << ", area: " << S3.getArea() << " }\n";
    cout << "S4: { radius: " << S4.getRadius() << ", area: " << S4.getArea() << " }\n";

    return 0;
}