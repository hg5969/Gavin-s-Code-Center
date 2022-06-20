/*========================================================== 

Title:       Lab 10 - Wizard Identification using Classes 
Course:      CSC 1100 
Author:      Gavin Middleton
Date:        <3/29/2022> 
Description: This program takes user input for the information of a wizard
that is attending Ravenwood school. This information is put into a class
by saving the data to variables in the class. Next those set values are
returned to the main() when called for the get function(s). This is what
allows the information to be outputted correctly.

 ========================================================== */ 
#include <iostream> 
using namespace std; 

class Wizard { //Creating the class
    int age, ID;
    string name1, name2; //Declaring the variables
    public: //Making the class public
        void set_wizardAge(int a){ //Setting the inputted value/storing the data
            age = a;
        }
        
        void set_wizardFirstName(string n1){
            name1 = n1;
        }
        
        void set_wizardLastName(string n2){
            name2 = n2;
        }
        
        void set_wizard_ID(int I){
            ID = I;
        }
        int get_wizardAge(){ //Returning the saved values
            return age;
        }
        
        string get_wizardFirstName(){
            return name1;
        }
        
        string get_wizardLastName(){
            return name2;
        }
        
        int get_wizard_ID(){
            return ID;
        }
}; 
 

int main() { 
//DO NOT MODIFY THE MAIN()!!!! 
    int wizardAge, wizard_ID; 
    string wizardFirstName, wizardLastName; 

    cin >> wizardAge >> wizardFirstName >> wizardLastName >> wizard_ID; 

    Wizard wiz; 
    wiz.set_wizardAge(wizardAge); 
    wiz.set_wizard_ID(wizard_ID); 
    wiz.set_wizardFirstName(wizardFirstName); 
    wiz.set_wizardLastName(wizardLastName); 

    cout << wiz.get_wizardAge() << "\n"; 
    cout << wiz.get_wizardLastName() << ", " << wiz.get_wizardFirstName() << "\n"; 
    cout << wiz.get_wizard_ID(); 

    return 0; 
} 
