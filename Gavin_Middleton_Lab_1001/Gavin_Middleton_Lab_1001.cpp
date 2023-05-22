// Gavin_Middleton_Lab_1001.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Square.h"
using namespace std;

int main()
{
	Square s1(7);
	Square s2(8);

	cout << "Sum of the Squares: " << s1 + s2 << endl;
	cout << "Average of the Squares: " << s1 * s2 << endl;

	return 0;
}
