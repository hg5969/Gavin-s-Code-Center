#pragma once
#include <iostream>
#include <string>
using namespace std;


class dayType {
private:
	int today;
	int NextDay;
	int PreviousDay;
public:
	void setDay(int m);
	void print(int m);
	int returnDay();
	int nextDay();
	int prevDay();
	int randDay(int m);
	dayType(int m);
	dayType();
};