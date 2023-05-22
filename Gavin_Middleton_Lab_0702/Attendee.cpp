#include <iostream>
#include "Header.h"
using namespace std;


void Attendee::setFirstName(string fn) {
	firstName = fn;
}

void Attendee::setLastName(string ln) {
	lastName = ln;
}

string Attendee::getFirstName() const {
	return firstName;
}

string Attendee::getLastName() const {
	return lastName;
}

Attendee::Attendee(string fn, string ln) {
	firstName = fn;
	lastName = ln;
}