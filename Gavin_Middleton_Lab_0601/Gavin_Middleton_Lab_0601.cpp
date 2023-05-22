// Gavin_Middleton_Lab_0601.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include "Header.h"
using namespace std;

int main()
{
    string username;
    float checkingBalance, savingsBalance;
    Client client;
    Client* ptr1, * ptr2;

    ptr1 = &client;
    ptr2 = &client;

    cout << "Lab 0601!\n";
    cout << "------------------\n";
    cout << "Enter the client's name: ";
    cin >> username;
    cout << "\nEnter initial checking balance: ";
    cin >> checkingBalance;
    cout << "Enter initial savings balance: ";
    cin >> savingsBalance;

    ptr1->setUsername(username);
    ptr1->setChecking(checkingBalance);
    ptr1->setSavings(savingsBalance);

    cout << "Client's name: " << ptr2->getUsername() << endl;
    cout << "Checking balacnce: " << ptr2->getChecking() << endl;
    cout << "Savings balance: " << ptr2->getSavings() << endl;

    return 0;
}
