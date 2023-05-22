#pragma once
#include <iostream>
using namespace std;


class PetType {
	string Name;
	string kind;
public:
	void setName(string name);
	void setKind(string breed);
	string getName() const;
	string getKind() const;
};

