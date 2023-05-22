#include <iostream>
#include "PetType.h"
using namespace std;


void PetType::setName(string name) {
	Name = name;
}

void PetType::setKind(string breed) {
	kind = breed;
}

string PetType::getName() const {
	return Name;
}

string PetType::getKind() const {
	return kind;
}