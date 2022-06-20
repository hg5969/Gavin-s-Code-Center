
/*==========================================================

 Title:       Lab3 - Dragon Years
 Course:      CSC 1100
 Author:      Gavin Middleton
 Date:        <02/01/2022>
 Description: This program outputs the age of a dragon.
 You also have to find the age at which you have to get a new
 dragon mount.

 ==========================================================
*/

#include <iostream>
using namespace std;

int main() {
  float age = 51.8, WizAge;
  string name = "Kaido"; //Set the variables.
  
  cout << name << "\n";
  cout << age << "\n"; //Print the givens.
  
  WizAge = ((age - 2) * 4) + 21; //equation for finding wizard years.
  cout << "The dragon named " << name << " is " << WizAge << " years old in wizard years.";
  //Final output, prints the name and wizard year age of the dragon.
  return 0;
}





