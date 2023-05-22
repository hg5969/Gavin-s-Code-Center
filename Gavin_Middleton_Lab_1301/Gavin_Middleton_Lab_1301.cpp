// Gavin_Middleton_Lab_1301.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;



void bubbleSort (vector<float> &list, const int length) {
    float temp;
    
    for (int iteration = 1; iteration < length; iteration++)
    {
        for (int index = 0; index < length - iteration; index++)
            if (list[index] > list[index + 1])
            {
                temp = list[index];
                list[index] = list[index + 1];
                list[index + 1] = temp;
            }
    }
}


int seqSearch (const vector<float>& list, int listLength, const float searchItem) {
    int loc;
    bool found = false;
    loc = 0;

    while (loc < listLength && !found)
        if (list[loc] == searchItem)
            found = true;
        else
            loc++;

    if (found)
        return loc;
    else
        return -1;
}


int main()
{
    cout << "Searching App!" << endl;
    cout << "-----------------\n";
    
    
    vector<float> v;
    float x = -1;
    
    while (1) {
        cout << "Enter a positive number (or a negative number to stop): ";
        cin >> x;
        
        if (x < 0) {
            break;
        }
        v.push_back(x);
    }

    bubbleSort(v, v.size());

    cout << "List of values:" << endl;

    for (float elements : v) {
        cout << elements << " ";
    }

    cout << endl;
    cout << "Search for a value in the list: ";
    cin >> x;

    int pos = seqSearch(v, v.size(), x);

    if (pos != -1) {
        cout << "The element was found in position " << pos << " using sequential search." << endl;
    }
    else {
        cout << "The element was not found using sequential search." << endl;
    }

    return 0;
}
