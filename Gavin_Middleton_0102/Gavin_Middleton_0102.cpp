// Gavin_Middleton_0102.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()
{
    int size = 0;
    
    do {
        cout << "Triangle App\n";
        cout << "------------\n\n";
        cout << "Enter the size {3,4,5,6,7}: ";
        cin >> size;

        if (size < 3 || size > 7) {
            cout << "Invalid input. Please Try again.\n\n";
        }
    } 
    
    
    while (size < 3 || size > 7);
    
    for (int i = 0; i < size; i++) { //Tri. 1
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    
    for (int i = 0; i < size; i++) { //Tri. 2
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < size - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;


    for (int i = 1; i <= size; i++) { //Tri. 3
        for (int j = size - 1; j >= i; j--) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;


    for (int i = 0; i < size; i++) { //Tri. 4
        for (int j = size - 1; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < size - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

