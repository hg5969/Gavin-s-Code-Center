// Gavin_Middleton_Lab_1402.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedListType.h"
#include "Student.h"
using namespace std;

int main()
{
    cout << "Linked List App!" << endl;
    cout << "------------------------" << endl;

    Student stu1("Wendy", "Lawson");
    Student stu2("Clark", "Kent");
    Student stu3("Bruce", "Wayne");
    Student stu4("Peter", "Parker");

    LinkedListType linkedListType;
    linkedListType.addLast(stu1);
    linkedListType.addLast(stu2);
    linkedListType.addLast(stu3);
    linkedListType.addLast(stu4);
    linkedListType.display();

    cout << "\nFirst Element: ";
    cout << linkedListType.getFirst().getFirstname() << " " << linkedListType.getFirst().getLastname();

    cout << "\nLast Element: ";
    cout << linkedListType.getLast().getFirstname() << " " << linkedListType.getLast().getLastname();
    cout << endl;

    return 0;
}