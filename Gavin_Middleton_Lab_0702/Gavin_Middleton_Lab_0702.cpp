// Gavin_Middleton_Lab_0702.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header1.h"
using namespace std;


void addAttendeeDialog(AttendeeList& aList) {
    if (aList.isFull() == true) {
        cout << "List is full. A new attendee cannot be added." << endl;
        return;
    }

    string first, last;
    
    cout << "\nAdd an attendee:" << endl;
    cout << "\tEnter the attendee's first name: ";
    cin >> first;
    cout << "\tEnter the attendee's last name: ";
    cin >> last;
    aList.addAttendee(first, last);
}


void swapAttendeeDialog(AttendeeList& aList) {
    if (aList.isEmpty() == true) {
        cout << "List is empty. No Attendees can be swapped." << endl;
        return;
    }

    int p0, p1;
    cout << "\nSwap Attendees:" << endl;
    cout << "\tEnter first attendee's position: ";
    cin >> p0;
    cout << "\tEnter second attendee's position: ";
    cin >> p1;

    if (p0 < 0 || p1 < 0 || p0 > aList.getSize() || p1 > aList.getSize()) {
        cout << "One or both of the positions are invalid. A swap cannot be executed." << endl;
        return;
    }
    else if (p0 == p1) {
        cout << "Same positions. No need to swap." << endl;
        return;
    }
    else {
        aList.swapAttendees(p0, p1);
    }
}


int main()
{
    AttendeeList aList;
    aList.print();

    while (1) {
        cout << "\n\n";
        cout << "===MENU===" << endl;
        cout << "1. Add an attendee." << endl;
        cout << "2. Remove an attendee." << endl;
        cout << "3. Swap positions of attendee." << endl;
        cout << "4. Exit." << endl;
        cout << "\nChoose an option [1-4]: ";
        int option;
        cin >> option;

        if (option == 1) {
            addAttendeeDialog(aList);
            aList.print();
        }
        else if (option == 2) {
            aList.removeLastAttendee();
            aList.print();
        }
        else if (option == 3) {
            swapAttendeeDialog(aList);
            aList.print();
        }
        else if (option == 4) {
            cout << "\n---Exiting---\n";
            return 0;
            break;
        }
        else {
            cout << "Invalid option. Try again." << endl;
            break;
        }
    }
}
