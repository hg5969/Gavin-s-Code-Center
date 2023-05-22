#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;


void BankAccount::setId(int i) {
	id = i;
}

void BankAccount::setFirstname(string f) {
	firstname = f;
}

void BankAccount::setLastname(string l) {
	lastname = l;
}

void BankAccount::setBalance(float b) {
	balance = b;
}

int BankAccount::getId() const {
	return id;
}

string BankAccount::getFirstname() const {
	return firstname;
}

string BankAccount::getLastname() const {
	return lastname;
}

float BankAccount::getBalance() const {
	return balance;
}

BankAccount::BankAccount(int i, string f, string l, float b) {
	setId(i);
	setFirstname(f);
	setLastname(l);
	setBalance(b);
}

bool BankAccount::operator != (const BankAccount b) const {
	return this->getId() != b.getId();
}

bool operator > (const BankAccount b0, const BankAccount b1) {
	return b0.getBalance() > b1.getBalance();
}

bool operator < (const BankAccount b0, const BankAccount b1) {
	return b0.getBalance() < b1.getBalance();
}

bool operator >= (const BankAccount b0, const BankAccount b1) {
	return b0.getBalance() >= b1.getBalance();
}

bool operator <= (const BankAccount b0, const BankAccount b1) {
	return b0.getBalance() <= b1.getBalance();
}

bool operator == (const BankAccount b0, const BankAccount b1) {
	return b0.getBalance() == b1.getBalance();
}