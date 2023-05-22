// Gavin_Middleton_0202.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CircleStr.h"

using namespace std;



void calculateCirclePerimeterStruct(struct CircleStr& myCircle); 
void calculateCircleAreaStruct(struct CircleStr& myCircle);


int main() {

    struct CircleStr myCircle1;
    struct CircleStr myCircle2;

    myCircle1.radius = 15.2;
    myCircle2.radius = 20.1;

    calculateCirclePerimeterStruct(myCircle1);
    calculateCirclePerimeterStruct(myCircle2);
    calculateCircleAreaStruct(myCircle1);
    calculateCircleAreaStruct(myCircle2);

    cout << "Circle App!\n";
    cout << "------------------------------" << endl;
    cout << "Radius     Perimeter     Area" << endl;
    cout << "------------------------------" << endl;
    cout << "Struct: " << endl;
    cout << myCircle1.radius << "       " << myCircle1.perimeter << "       " << myCircle1.area << endl;
    cout << myCircle2.radius << "       " << myCircle2.perimeter << "       " << myCircle2.area << endl;
}


void calculateCirclePerimeterStruct(struct CircleStr& myCircle) {
    float radius = myCircle.radius;
    myCircle.perimeter = 2 * 3.14159 * (myCircle.radius);
}


void calculateCircleAreaStruct(struct CircleStr& myCircle) {
    float radius = myCircle.radius;
    myCircle.area = 3.14159 * ((myCircle.radius) * (myCircle.radius));
}