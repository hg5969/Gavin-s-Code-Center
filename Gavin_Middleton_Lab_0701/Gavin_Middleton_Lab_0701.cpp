// Gavin_Middleton_Lab_0701.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Attendee.h"
#include "AttendeeList.h"
using namespace std;


void addAttendeeDialog(AttendeeList& aList) {
    if (aList.getSize() >= 5) {
        cout << "\nList is full, a new attendee cannot be added!";
    }
    else {
        string fn, ln;

        cout << "\nEnter the attendee first name: ";
        cin >> fn;
        cout << "Enter the attendee last name: ";
        cin >> ln;

        aList.addAttendee(fn, ln);
    }
}


int main()
{
    AttendeeList aList;
    aList.print();
    int option;
    int flag = 0;

    while (1) {
        cout << "\n\n=== MENU ===\n";
        cout << "1) Add an attendee.\n";
        cout << "2) Exit.\n";
        cout << "Choose an option [1-2]: ";
        cin >> option;

        if (option == 1) {
            addAttendeeDialog(aList);
        }
        else if (option == 2) {
            flag = 1;
            break;
        }
        else {
            cout << "\nInvalid option. Try again!";
        }
        if (flag == 1) {
            break;
        }
    }

    cout << "\nThe Attendee List is:\n";
    aList.print();

    return 0;
}