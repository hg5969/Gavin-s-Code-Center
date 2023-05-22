// Gavin_Middleton_Lab0802.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point2D.h"
#include "Edge_E.h"
#include "Edge_M.h"
using namespace std;

int main()
{
    Point2D p1(0, 0), p2(4, 4);

    Edge_E distance1;
    Edge_M distance2;

    distance1.setP0(&p1);
    distance1.setP1(&p2);

    distance2.setP0(&p1);
    distance2.setP1(&p2);

    cout << "Object 1:\n";
    cout << "\tX: " << p1.getX() << endl;
    cout << "\tY: " << p1.getY() << endl;
    cout << "\nObject 2:\n";
    cout << "\tX: " << p2.getX() << endl;
    cout << "\tY: " << p2.getY() << endl;
    cout << "\nDistance of Edge_E: " << distance1.getDistance() << endl;
    cout << "Distance of Edge_M: " << distance2.getDistance() << endl;
}
