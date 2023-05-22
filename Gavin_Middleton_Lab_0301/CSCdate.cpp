#include <iostream>
#include "CSCdate.h"
using namespace std;

void CSCdate::setDay(int d) {
	if (d >= 1 && d <= 31) day = d;
}

void CSCdate::setMonth(int m) {
	if (m >= 1 && m <= 12) month = m;

}

void CSCdate::setYear(int y) {
	if (y >= 1800 && y <= 2022) year = y;
}

int CSCdate::getDay() const {
	return day;
}

int CSCdate::getMonth() const {
	return month;
}

int CSCdate::getYear() const {
	return year;
}

string CSCdate::getMonthName() const {
	if (month == 1) {
		return "January";
	}

	if (month == 2) {
		return "February";
	}

	if (month == 3) {
		return "March";
	}

	if (month == 4) {
		return "April";
	}

	if (month == 5) {
		return "May";
	}

	if (month == 6) {
		return "June";
	}

	if (month == 7) {
		return "July";
	}

	if (month == 8) {
		return "August";
	}

	if (month == 9) {
		return "September";
	}

	if (month == 10) {
		return "October";
	}

	if (month == 11) {
		return "November";
	}

	if (month == 12) {
		return "December";
	}

}

CSCdate::CSCdate(int d = 1, int m = 1, int y = 1800) {
	if (d >= 1 && d <= 31) {
		day = d;
	}
	else {
		day = 1;
	}

	if (m >= 1 && m <= 12) {
		month = m;
	}
	else {
		month = 1;
	}
	
	if (y >= 1800 && y <= 2022) {
		year = y;
	}
	else {
		year = 1800;
	}
}