#include <iostream>
#include <string>
#include "dayType.h"
using namespace std;


void dayType::setDay(int m) {
	today = m;
}


void dayType::print(int m) {
	if (m == 1) {
		cout << "Mon." << endl;
	}

	if (m == 2) {
		cout << "Tues." << endl;
	}

	if (m == 3) {
		cout << "Wed." << endl;
	}

	if (m == 4) {
		cout << "Thurs." << endl;
	}

	if (m == 5) {
		cout << "Fri." << endl;
	}

	if (m == 6) {
		cout << "Sat." << endl;
	}

	if (m == 7) {
		cout << "Sun." << endl;
	}
}


int dayType::returnDay() {
	return today;
}


int dayType::nextDay() {
	if (today == 6) {
		NextDay = 0;
	}

	else {
		NextDay = today + 1;
	}

	return NextDay;
}


int dayType::prevDay() {
	if (today == 0) {
		PreviousDay = 6;
	}

	else {
		PreviousDay = today - 1;
	}
	
	return PreviousDay;
}


int dayType::randDay(int m) {
	int N = today + m;
	return (N % 7);
}


dayType::dayType(int m) {
	today = m;
}


dayType::dayType() {
	today = 0;
}