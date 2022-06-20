/*==========================================================

 Title:       Lab 9 - C++ Basketball Season
 Course:      CSC 1100
 Author:      Gavin Middleton
 Date:        <3/23/2022>
 Description: This program takes a dynamically allocated array of game scores
 lets the user change the value of one game, add those new values together
 then finally outputs the new values in the array. So if the user wants to change
 the score of game 2, and add 6 points the array's value for game 2 will now be 38
 rather than 32.

 ==========================================================
*/

#include <iostream>
using namespace std;

void alterGameScore(int a[], int n){
    int k;
    cin >> k;
    a[n] = a[n] + k; //creates the variable k, which is the number
}                    //that is added to one of the original game scores.
                     //(e.g game 2 score is 32, plus k = 6, outputs 38)

int totalScore(int a[], int length){
    int *total = 0;
    total = new int; //Creates total variable and dynamically allocates the pointer.
    for(int i = 0; i < length; i++){
       *total += a[i]; //For loop adds all the existing values and sets it to the total.
    }
    return *total; //returns the total value
}

void printScores(int a[], int length){
    for(int i = 0; i < length; i++){
        cout << a[i] << " "; //prints the newly updated array.
                             //Meaning the original values may have been changed
                             //(e.g if game 2 was changed from 32 to 38 points,
                             //the function outputs 38, the "new" value.)
    }
}


int main() {

    const int SIZE = 5;
    int* pArr;
    pArr = new int[SIZE];
    int numberOfGame;

    for (int i = 0; i < SIZE; i++) 
            *(pArr + i) = ((i + 2) * 10) + (i + 1); 

    //cout << "Enter game to check: ";
    cin >> numberOfGame;
    
    alterGameScore(pArr, numberOfGame - 1);
    //cout << "new value: ";
    cout << *(pArr + numberOfGame - 1) << endl;
    
    printScores(pArr, SIZE);
    
    //cout << "\ntotal Score: ";
    cout << endl << totalScore(pArr, SIZE);

}

