#pragma once
#include <iostream>
#include "PetType.h"
using namespace std;


class PersonType {
	string firstName;
	string lastName;
	PetType* Pet;
public:
	void setFirstName(string fn);
	void setLastName(string ln);
	void setPet(PetType* pet);
	string getFirstName() const;
	string getLastName() const;
	PetType* getPet() const;
	PersonType getShallowCopy() const;
	PersonType getDeepCopy() const;
};
