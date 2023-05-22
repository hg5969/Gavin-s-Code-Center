// Gavin_Middleton_Lab_0801.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


float average(int* ptrArray, int size) {
    float total = 0;
    float mean;

    for (int i = 0; i < size; i++) {
        total = total + ptrArray[i];
    }

    mean = total / size;
    return mean;
}

int max(int* ptrArray, int size) {
    int maximum = ptrArray[0];
    int maxindex = 0;

    for (int i = 0; i < size; i++) {
        if (maximum < ptrArray[i]) {
            maximum = ptrArray[i];
            maxindex = i;
        }
    }
    return maxindex;
}

int min(int* ptrArray, int size) {
    int minimum = ptrArray[0];
    int minindex = 0;

    for (int i = 0; i < size; i++) {
        if (minimum > ptrArray[i]) {
            minimum = ptrArray[i];
            minindex = i;
        }
    }
    return minindex;
}

int main()
{
    int size;
    float mean;
    int maxindex;
    int minindex;
    int range;

    cout << "Dynamic Array App!\n";
    cout << "---------------------------\n";
    cout << "Enter the size of the dynamic array: ";
    cin >> size;
    
    int* arr = new int [size];
    for (int i = 0; i < size; i++) {
        cout << "Enter the value in position [" << i << "]: ";
        cin >> arr[i];
    }

    cout << "\nValues:\n\n" << "[ ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    mean = average(arr, size);
    maxindex = max(arr, size);
    minindex = min(arr, size);

    cout << "\nThe average value is: " << mean << endl;
    cout << "The max value is: " << arr[maxindex] << endl;
    cout << "The min value is: " << arr[minindex] << endl;

    return 0;
}
