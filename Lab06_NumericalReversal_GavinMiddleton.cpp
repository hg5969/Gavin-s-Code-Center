/*==========================================================

Title: Lab6 - Numerical Reversal

Course: CSC 1100

Author: Gavin Middleton

Date: <2/22/2022>

Description: This program takes a user input, size of the array,
and uses that size value to input a certain amount of values into an array.
This array is then reversed, this meaning if the values were (1, 2, 3)
they will now be (3, 2, 1), and this is what is outputted. (space-delimited)

==========================================================

*/

#include <iostream>

using namespace std;

int main() {

    int size; //Creation of the array, and defined size of the array
    cin >> size;
    int array[size]; 
    
    for(int i = 0; i < size; i++){ //This loop inputs the values given
        cin >> array[i];
    }
    
    for(int i = (size - 1); i >= 0; i--){ // This loop reverses the array and outputs those values
        cout << array[i] << " ";
    }
    
    return 0;

}

