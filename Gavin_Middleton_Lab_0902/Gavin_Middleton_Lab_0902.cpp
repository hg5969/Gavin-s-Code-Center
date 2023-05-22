// Gavin_Middleton_Lab_0902.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PersonType.h"
#include "PetType.h"
using namespace std;

int main()
{
    PersonType person;
    PetType pet;

    cout << "Shallow and Deep Copy!\n";
    cout << "------------------------------\n";
    
    person.setPet(&pet);
    person.setFirstName("Tom");
    person.setLastName("Riddle");
    pet.setName("Ace");
    pet.setKind("Dog");

    cout << "\nOriginal: " << person.getFirstName() << " " << person.getLastName() << " Pet: " << pet.getName() << ", " << pet.getKind() << std::endl;
    
    PersonType shallowCopy = person.getShallowCopy();
    shallowCopy.setFirstName("Harry");
    shallowCopy.setLastName("Potter");

    cout << "Shallow: " << shallowCopy.getFirstName() << " " << shallowCopy.getLastName() << " Pet: " << shallowCopy.getPet()->getName() << ", " << shallowCopy.getPet()->getKind() << std::endl;

    PersonType deepCopy = person.getDeepCopy();
    deepCopy.setFirstName("Hermione");
    deepCopy.setLastName("Granger");
    deepCopy.getPet()->setName("Katrina");
    deepCopy.getPet()->setKind("Cat");

    cout << "Deep: " << deepCopy.getFirstName() << " " << deepCopy.getLastName() << " Pet: " << deepCopy.getPet()->getName() << ", " << deepCopy.getPet()->getKind() << std::endl;
    
    return 0;
}
