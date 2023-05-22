// Gavin_Middleton_Lab_1302.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;


void insertionsort(vector<int>& list, int Length)
{
    int firstOutoforder, location;
    int temp;

    for (firstOutoforder = 1; firstOutoforder < Length; firstOutoforder++)
        if (list[firstOutoforder] < list[firstOutoforder - 1])
        {
            temp = list[firstOutoforder];
            location = firstOutoforder;
            do
            {
                list[location] = list[location - 1];
                location--;
            } while (location > 0 && list[location - 1] > temp);

            list[location] = temp;
        }
}

int binarySearch(vector<int>& list, int Length, int searchItem)
{
    int first = 0;
    int last = Length - 1;
    int mid;
    bool found = false;
    while (first <= last && !found)
    {
        mid = (first + last) / 2;
        if (list[mid] == searchItem)
            found = true;
        else if (list[mid] > searchItem)
            last = mid - 1;
        else
            first = mid + 1;
    }
    if (found)
        return mid;
    else
        return -1;
}

int main()
{
    cout << "Seaching App!\n";
    cout << "--------------------\n";

    vector<int> v;
    int x = -1;
    
    while (1) {
        cout << "Enter a positive number (or a negative number to stop): ";
        cin >> x;
        if (x < 0) {
            break;
        }
        v.push_back(x);
    }

    insertionsort(v, v.size());

    cout << "List of values: " << endl;
    for (int elements : v) {
        cout << elements << " ";
    }

    cout << endl;
    cout << "Search for a value in the list: ";
    cin >> x;
    int position = binarySearch(v, v.size(), x);

    if (position != -1) {
        cout << "The element was found in position " << position << " using binary search." << endl;
    }
    else {
        cout << "The element was not found using binary search." << endl;
    }

    return 0;
}