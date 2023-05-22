#pragma once
#include <iostream>
using namespace std;


class Client {
	string Username;
	float checkingBalance;
	float savingsBalance;
public:
	void setUsername(string u);
	void setChecking(float cb);
	void setSavings(float sb);
	string getUsername() const;
	float getChecking() const;
	float getSavings() const;
	Client(string u = "", float cb = 0, float sb = 0);
};
