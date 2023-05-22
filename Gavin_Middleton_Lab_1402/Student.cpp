#include <iostream>
#include "Student.h"
using namespace std;


void Student::setFirstname(string fn) {
	firstname = fn;
}

void Student::setLastname(string ln) {
	lastname = ln;
}

string Student::getFirstname() const {
	return firstname;
}

string Student::getLastname() const {
	return lastname;
}

Student::Student(string fn, string ln) {
	setFirstname(fn);
	setLastname(ln);
}

Student::Student() {
	setFirstname("N/a");
	setLastname("N/a");
}