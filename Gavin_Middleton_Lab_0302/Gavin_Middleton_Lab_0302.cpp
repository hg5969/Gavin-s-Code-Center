// Gavin_Middleton_Lab_0302.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "dayType.h"

using namespace std;

int main()
{
    int Day = -1;
    int rand = -1;

    cout << "Please Enter a number for the day of the week (1-7): ";
    
    while (Day >= 7 || Day < 0) {
        cin >> Day;
    }

    dayType Today;
    
    
    Today.setDay(Day);
    cout << "Today is: ";
    Today.print(Day);
    cout << "\nYesterday was: ";
    Today.print(Today.prevDay());
    cout << "\nTomorrow is: ";
    Today.print(Today.nextDay());


    cout << "\n\nType a number of days: ";

    while (rand < 0) {
        cin >> rand;
    }


    cout << "\nNow the current day is: ";
    Today.print(Today.randDay(rand));
    cout << endl;

    return 0;
}


