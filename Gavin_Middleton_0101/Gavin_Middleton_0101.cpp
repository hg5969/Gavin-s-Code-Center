// Gavin_Middleton_0101.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ConversionTools.h"

using namespace std;

int main()
{
    float degF = 0, degC = 0;
    cout << "Conversion App!\n";
    cout << "---------------\n";

    cout << "Conversion from Fahrenheit to Celcius\n";
    cout << "Enter Degrees (Fahrenheit): ";
    cin >> degF;
    degC = FtoC(degF);
    cout << "Degrees in Celcius = " << degC << endl;

    cout << "Conversion from Celcius to Fahrenheit\n";
    cout << "Enter Degrees (Celcius): ";
    cin >> degC;
    degF = CtoF(degC);
    cout << "Degrees in Fahrenheit = " << degF << endl;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
