#include <iostream>
#include "Header1.h"
using namespace std;


bool AttendeeList::isEmpty() const {
	if (position == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool AttendeeList::isFull() const {
	if (position == MAXIMUM_SIZE) {
		return true;
	}
	else {
		return false;
	}
}

void AttendeeList::addAttendee(string fn, string ln) {
	if (position >= MAXIMUM_SIZE) {
		cout << "List is full. A new attendee cannot be added.\n";
		return;
	}
	else {
		list[position] = new Attendee(fn, ln);
		position++;
	}
}

void AttendeeList::removeLastAttendee() {
	if (position == 0) {
		cout << "List is already empty.\n";
	}
	else {
		position--;
		delete list[position];
		list[position] = nullptr;
	}
}

void AttendeeList::swapAttendees(int p0, int p1) {
	if (p0 < 0 || p1 < 0 || p0 >= position || p1 >= position) {
		cout << "Attendee cannot be swapped.\n";
	}
	else {
		Attendee* temp = list[p0];
		list[p0] = list[p1];
		list[p1] = temp;
	}
}

Attendee* AttendeeList::getAttendee(int i) {
	if (i < 0 || i >= position) {
		return nullptr;
	}
	else {
		return list[i];
	}
}

int AttendeeList::getSize() const {
	return position;
}

void AttendeeList::print() const {
	cout << "\n===ATTENDEE LIST===\n" << endl;

	for (int i = 0; i < MAXIMUM_SIZE; i++) {
		if (i < position) {
			cout << i << ". " << list[i]->getFirstName() << " " << list[i]->getLastName() << endl;
		}
		else {
			cout << "[EMPTY]" << endl;
		}
	}
}

AttendeeList::AttendeeList() {
	position = 0;
	for (int i = 0; i < MAXIMUM_SIZE; i++) {
		list[i] = nullptr;
	}
}