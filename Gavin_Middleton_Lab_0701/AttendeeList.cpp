#include <iostream>
#include "AttendeeList.h"
using namespace std;


void AttendeeList::addAttendee(string fn, string ln) {
	if (position < 5) {
		list[position] = new Attendee(fn, ln);
		position++;
	}
}

Attendee* AttendeeList::getAttendee(int i) const {
	if (i < 5) {
		return list[i];
	}
	else {
		return nullptr;
	}
}

int AttendeeList::getSize() const {
	return position;
}

void AttendeeList::print() const {
	if (position == 0) {
		cout << "Empty!";
	}
	else {
		for (int i = 0; i < position; i++) {
			cout << "*" << (*list[i]).getFirstName() << " " << (*list[i]).getLastName() << endl;
		}
	}
}

AttendeeList::AttendeeList() {
	position = 0;
	
	for (int i = 0; i < 5; i++) {
		list[i] = nullptr;
	}

}