/*==========================================================

Title: Lab5 - Numerical Representation

Course: CSC 1100

Author: Gavin Middleton

Date: <02/15/2022>

Description: This program takes 2 user inputs as integers
then creates a library for the integer to string conversion.
Next, it goes through conditionals to test whether the variable
is between 1 and 9, whether it is going beyond 9, if it is even or odd,
and finally if the variable is equal to the last inputted number.

==========================================================

*/

#include <iostream>

using namespace std;

int main() {

int num1, num2, x; //Variable creation

cin >> num1; //Variable input
cin >> num2;

x = num1;

string one[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; // Library for the number to word conversion

while(num1>0){ //While loop to set up a set of conditionals
    if(x == num1 && num1 != (num2 + 1)){ //Checks to see if the variable is between 1 and 9, then outputs every number as a string between the two user inputted numbers
        cout << one[(x - 1)] << endl;
        x++;
        num1++;
    }
    if(x > 9 && x % 2 == 0 && x != (num2 + 1)){ //Checks to see whether the number is above 9 and even
        cout << "even" << endl;
        x++;
    }
    if(x > 9 && x % 2 != 0 && x != (num2 + 1)){ //Checks to see whether the number is above 9 and odd
        cout << "odd" << endl;
        x++;
    }
    if(x == (num2 + 1)){ //If all conditionals are complete, the loop ends here.
        break;
    }
}

    

return 0;

}
