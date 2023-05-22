// Gavin_Middleton_Lab_1101.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;


string ToF(bool input) {
    return input ? "True" : "False";
}

int main()
{
    cout << "Bank account app!\n";
    cout << "--------------------\n";
    BankAccount ba0(1, "Mikasa", "Ackerman", 7000);
    BankAccount ba1(2, "Andy", "Scythia", 90000);
    cout << "Comparison: ba0 != ba1: " << ToF(ba0 != ba1) << endl;
    cout << "Comparison: ba0 > ba1: " << ToF(ba0 > ba1) << endl;
    cout << "Comparison: ba1 > ba0: " << ToF(ba1 > ba0) << endl;
    cout << "Comparison: ba0 < ba1: " << ToF(ba0 < ba1) << endl;
    cout << "Comparison: ba1 < ba0: " << ToF(ba1 < ba0) << endl;
    cout << "Comparison: ba0 >= ba1: " << ToF(ba0 >= ba1) << endl;
    cout << "Comparison: ba1 >= ba0: " << ToF(ba1 >= ba0) << endl;
    cout << "Comparison: ba0 <= ba1: " << ToF(ba0 <= ba1) << endl;
    cout << "Comparison: ba1 <= ba0: " << ToF(ba1 <= ba0) << endl;
    cout << "Comparison: ba0 == ba1: " << ToF(ba0 == ba1) << endl;
}
