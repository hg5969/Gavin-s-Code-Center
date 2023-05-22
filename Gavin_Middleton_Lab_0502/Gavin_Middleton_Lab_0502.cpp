// Gavin_Middleton_Lab_0502.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "Square.h"
#include "SquareLib.h"
using namespace std;

int main()
{
    cout << "Square App!\n";
    cout << "----------------------\n";
    cout << "Length  Area\n";
    cout << "----------------------\n";

    Square s(2);
    cout << setw(8) << left << s.getlength() << s.getArea() << endl;

    s = doubleLength_1(s);
    cout << setw(8) << left << s.getlength() << s.getArea() << endl;

    doubleLength_2(s);
    cout << setw(8) << left << s.getlength() << s.getArea() << endl;

    doubleLength_3(&s);
    cout << setw(8) << left << s.getlength() << s.getArea() << endl;

    return 0;
}
    