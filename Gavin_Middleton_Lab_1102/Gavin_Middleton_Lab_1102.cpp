// Gavin_Middleton_Lab_1102.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CarType.h"
#include "DynamicArray.h"
using namespace std;

int main()
{
    cout << "Dynamic Array of Integers!\n";
    cout << "------------------\n";
    DynamicArray<int> da(4);
    da.addElement(10);
    da.addElement(5);
    da.addElement(7);
    for (int i = 0; i < da.getSize(); i++) {
        cout << "Element: " << da.getElement(i) << endl;
    }
    cout << "------------------\n";
    cout << "\nDynamic Array of Car Types!\n";
    cout << "------------------\n";
    DynamicArray<CarType> ct(3);
    CarType car1("Honda", "Civic", 2000);
    CarType car2("Toyota", "Corolla", 2010);
    CarType car3("Tesla", "S", 2019);
    ct.addElement(car1);
    ct.addElement(car2);
    ct.addElement(car3);
    for (int i = 0; i < ct.getSize(); i++) {
        cout << "Element: " << ct.getElement(i).getManufacturer() << " " << ct.getElement(i).getModel() << ", " << ct.getElement(i).getYear() << endl;
    }
    cout << "------------------\n";
    return 0;
}
