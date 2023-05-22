#include <iostream>
#include "PersonType.h"
using namespace std;


void PersonType::setFirstName(string fn) {
	firstName = fn;
}

void PersonType::setLastName(string ln) {
	lastName = ln;
}

void PersonType::setPet(PetType* pet) {
	Pet = pet;
}

string PersonType::getFirstName() const {
	return firstName;
}

string PersonType::getLastName() const {
	return lastName;
}

PetType* PersonType::getPet() const {
	return Pet;
}

PersonType PersonType::getShallowCopy() const {
	PersonType copy;
	copy.firstName = firstName;
	copy.lastName = lastName;
	copy.Pet = Pet;
	return copy;
}

PersonType PersonType::getDeepCopy() const {
	PersonType copy;
	copy.firstName = firstName;
	copy.lastName = lastName;
	copy.Pet = new PetType;
	copy.Pet->setName(Pet->getName());
	copy.Pet->setKind(Pet->getKind());
	return copy;
}