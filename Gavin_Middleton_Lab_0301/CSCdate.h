#pragma once
#include <iostream>
using namespace std;

class CSCdate {
private:
	int day, month, year;
public:
	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	string getMonthName() const;
	CSCdate(int d, int m, int y);
};