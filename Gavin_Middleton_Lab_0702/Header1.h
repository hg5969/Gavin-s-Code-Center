#pragma once
#include <iostream>
#include "Header.h"
using namespace std;


class AttendeeList {
	static const int MAXIMUM_SIZE = 4;
	Attendee* list[MAXIMUM_SIZE];
	int position;
public:
	bool isEmpty() const;
	bool isFull() const;
	void addAttendee(string fn, string ln);
	void removeLastAttendee();
	void swapAttendees(int p0, int p1);
	Attendee* getAttendee(int i);
	int getSize() const;
	void print() const;
	AttendeeList();
};