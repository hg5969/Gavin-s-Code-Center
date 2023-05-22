// Gavin_Middleton_Lab_1201.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Rectangle.h"
#include "Exception.h"
using namespace std;

int main()
{
    cout << "Exception App!\n";
    cout << "-----------------\n";
    try {
        Rectangle length(1);
        Rectangle width(1);
        length.setLength(20);
        width.setWidth(-4);
        cout << "Length: " << length.getLength() << "; Width: " << width.getWidth() << endl;
    }
    catch (InvalidMeasureException e) {
        cout << e.what() << endl;
    }

    return 0;
}
