/*==========================================================

 Title:       Lab 7 - C++ Care Unit
 Course:      CSC 1100
 Author:      Gavin Middleton
 Date:        <3/1/2022>
 Description: This program takes the weight of 2 people that are the
 same height, converts the height to meters, calculates the common BMI for their weight
and then the BMI for their specifications, finally it swaps the two weights
and does the same calculations again to get both sets of data for both persons.

 ==========================================================
*/

#include <iostream>
using namespace std;

float conversionMeters(float heightFt){
    float heightM;
    heightM = heightFt / 3.281;
    return heightM;
}

float BMIcalculator(float weightKg){
    float BMI = weightKg / (1.8 * 1.8);
    return BMI;
}

float BMIcalculator(float weightKg, float heightM){
    float BMI = weightKg / (heightM * heightM);
    return BMI;
}

void swap(float weight1, float weight2){
    float temp = weight1;
    weight1 = weight2;
    weight2 = temp;
}

int main() {
    double w1, w2, h;
    cin >> w1 >> w2 >> h;

    float index1 = BMIcalculator(w1);
    float index2 = BMIcalculator(w2, conversionMeters(h));

    cout << index1 << " " << index2 << endl;

    swap(w1, w2);

    index1 = BMIcalculator(w1);
    index2 = BMIcalculator(w2, conversionMeters(h));
    cout << index1 << " " << index2 << endl;
}

