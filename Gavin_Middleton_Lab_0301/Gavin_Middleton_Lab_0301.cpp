// Gavin_Middleton_Lab_0301.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CSCdate.h"
using namespace std;


int main()
{
    cout << "CSCdate app!\n";
    cout << "---------------------\n";

    CSCdate date1(1, 1, 1800);
    cout << "First CSCdate: (" << date1.getDay() << " / " << date1.getMonthName() << " / " << date1.getYear() << ")\n";

    date1.setDay(21);
    date1.setMonth(4);
    date1.setYear(2005);
    cout << "Updated First CSCdate: (" << date1.getDay() << " / " << date1.getMonthName() << " / " << date1.getYear() << ")\n";
    
    CSCdate date2(18, 6, 2021);
    cout << "Second CSCdate: (" << date2.getDay() << " / " << date2.getMonthName() << " / " << date2.getYear() << ")\n";
    
    return 0;
}

