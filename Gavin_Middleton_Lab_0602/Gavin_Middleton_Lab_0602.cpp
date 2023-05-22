// Gavin_Middleton_Lab_0602.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CourseGrade.h"
using namespace std;


CourseGrade* maxGrade(CourseGrade* course0, CourseGrade* course1) {
    if (course0->getGrade() > course1->getGrade()) return course0;
    else return course1;
}


int main()
{
    int course;
    float grade;
    CourseGrade* x = new CourseGrade(0, 0);
    CourseGrade* y = new CourseGrade(0, 0);
    CourseGrade* z = new CourseGrade(0, 0);

    cout << "Course grade app!\n";
    cout << "-----------------------\n\n";

    cout << "Enter the code of the first course: ";
    cin >> course;
    cout << "Enter the grade of the first course: ";
    cin >> grade;
    x->setCourse(course);
    x->setGrade(grade);

    cout << "\nEnter the code of the second course: ";
    cin >> course;
    cout << "Enter the grade of the second course: ";
    cin >> grade;
    y->setCourse(course);
    y->setGrade(grade);

    cout << "\nEnter the code of the third course: ";
    cin >> course;
    cout << "Enter the grade of the third course: ";
    cin >> grade;
    z->setCourse(course);
    z->setGrade(grade);

    cout << "\n\n-----------------------\n";
    cout << "Course Grade\n";
    cout << x->getCourse() << "   " << x->getGrade() << endl;
    cout << y->getCourse() << "   " << y->getGrade() << endl;
    cout << z->getCourse() << "   " << z->getGrade() << endl;
    cout << "-----------------------\n\n";

    float total = x->getGrade() + y->getGrade() + z->getGrade();
    float avg = total / 3;

    cout << "The average grade is " << avg << endl;
    cout << "\nThe course with the highest grade is " << maxGrade(maxGrade(x, y), z)->getCourse() << endl;

    return 0;
}