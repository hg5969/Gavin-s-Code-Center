// Gavin_Middleton_Lab_1202.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int sum (const int arr[], const int size) {
    int arraySum = 0;
    for (int i = 0; i < size; i++) {
        arraySum += arr[i];
    }

    return arraySum;
}

int recSum (const int arr[], const int size, const int position) {
    if (position == size) {
        return 0;
    }

    return arr[position] + recSum(arr, size, position + 1);
}

int recMax (const int arr[], const int size, const int position) {
    if (position == size) {
        return INT_MIN;
    }

    return max(arr[position], recMax(arr, size, position + 1));
}

int recMin(const int arr[], const int size, const int position) {
    if (position == size) {
        return INT_MAX;
    }

    return min(arr[position], recMin(arr, size, position + 1));
}

int main()
{
    int arr[] = { 8, 3, 4, 84, 39, 32, 18, 54, 76, 0, 4 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Elements of the array are: " << "{ ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "}" << endl;
    cout << "The sum of the array: " << sum(arr, size) << endl;
    cout << "The sum of the array using recursion: " << recSum(arr, size, 0) << endl;
    cout << "The maximum value of the array usin recursion: " << recMax(arr, size, 0) << endl;
    cout << "The minimum value of the array using recursion: " << recMin(arr, size, 0) << endl;

    return 0;
}
