// Gavin_Middleton_Lab_0201.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void calculateCirclePerimeterArray(float arr[][3], int nCircles) {
    for (int i = 0; i < (nCircles); i++) {
        arr[i][1] = 2 * 3.14159 * (arr[i][0]);
    }
}

void calculateCircleAreaArray(float arr[][3], int nCircles) {
    for (int i = 0; i < (nCircles); i++) {
        arr[i][2] = 3.14159 * ((arr[i][0]) * (arr[i][0]));
    }
}

int main()
{
    float BiArr[2][3];
    BiArr[0][0] = 15.2;
    BiArr[1][0] = 20.1;


    calculateCirclePerimeterArray(BiArr, 3);
    calculateCircleAreaArray(BiArr, 3);


    cout << "Circle App!\n";
    cout << "------------------------------" << endl;
    cout << "Radius     Perimeter     Area" << endl;
    cout << "------------------------------" << endl;
    cout << "Array:\n";
    

    for (int i = 0; i < 2; i++) {
        cout << BiArr[i][0] << "     " << BiArr[i][1] << "     " << BiArr[i][2] << endl;
    }
}


