// Gavin_Middleton_Lab_1401.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedListType.h"
#include "Student.h"
using namespace std;

int main()
{
    Student stu1 = *new Student("Clark", "Kent");
    Student stu2 = *new Student("Bruce", "Wayne");
    Student stu3 = *new Student("Peter", "Parker");

    LinkedListType linkedListType = *new LinkedListType();
    linkedListType.addLast(stu1);
    linkedListType.addLast(stu2);
    linkedListType.addLast(stu3);
    cout << "Linked List App!" << endl;
    cout << "------------------------" << endl;
    linkedListType.display();
    return 0;
}
