#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


class Student {
	string firstname, lastname;
public:
	void setFirstname(string fn);
	void setLastname(string ln);
	string getFirstname() const;
	string getLastname() const;
	Student(string fn, string ln);
	Student();
};
