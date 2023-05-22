#include <iostream>
#include <string>
#include "Header.h"
using namespace std;


void Client::setUsername(string u) {
	Username = u;
}

void Client::setChecking(float cb) {
	if (cb > 0) {
		checkingBalance = cb;
	}
}

void Client::setSavings(float sb) {
	if (sb > 0) {
		savingsBalance = sb;
	}
}

string Client::getUsername() const {
	return Username;
}

float Client::getChecking() const {
	return checkingBalance;
}

float Client::getSavings() const {
	return savingsBalance;
}

Client::Client(string u, float cb, float sb) : Username(u), checkingBalance(cb), savingsBalance(sb) {

}