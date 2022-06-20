/*==========================================================

 Title:       Lab4 - Giftbox to Tricity
 Course:      CSC 1100
 Author:      Gavin Middleton
 Date:        < 2/8 /22 >
 Description: This program Takes a user input of 2 lengths, these
 lengths are compared to one another, then they are used to create another
 side of the triangle that fits between the other two as a hypotenuse,
 using the pythagreon theorem.

 ==========================================================
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float plank1, plank2; //Create the variables and round them to the nearest whole number
 
  cin >> plank1;

  cin >> plank2; //User input
  
  bool A = (plank1 == plank2);
  bool B = (plank1 < plank2);
  bool C = (plank1 > plank2); 
  
  cout << A << " //=" << endl;
  cout << B << " //<" << endl;
  cout << C << " //>" << endl; //Boolean expressions to ouput true or false
  
  cout << "The hypotenuse of triangle equals to " << round(sqrt(pow(plank1,2)+pow(plank2,2))) << endl; //Final ouput

  return 0;
}

