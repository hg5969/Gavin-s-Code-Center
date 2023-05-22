#include <iostream>
#include <string>
#include "LinkedListType.h"
using namespace std;


bool LinkedListType::isEmpty() const {
	return first == nullptr && last == nullptr;
}

int LinkedListType::getSize() const {
	return size;
}

Student LinkedListType::getFirst() const {
	if (isEmpty()) {
		throw string("");
	}
	else {
		return first->data;
	}
}

Student LinkedListType::getLast() const {
	if (isEmpty()) {
		throw string("");
	}
	else {
		return last->data;
	}
}

void LinkedListType::display() const {
	NodeType* current = nullptr;
	current = first;
	while (current != nullptr) {
		cout << current->data.getFirstname() << " " << current->data.getLastname() << endl;
		current = current->next;
	}
}

void LinkedListType::addLast(Student studentData) {
	NodeType* newNode;
	newNode = new NodeType;
	newNode->data = studentData;

	if (isEmpty()) {
		first = newNode;
		last = newNode;
	}
	else {
		last->next = newNode;
		last = newNode;
	}
	size++;
}

void LinkedListType::addFirst(Student studentData) {
	NodeType* newNode;
	newNode = new NodeType;
	newNode->data = studentData;

	if (isEmpty()) {
		first = newNode;
		last = newNode;
	}
	else {
		first->next = newNode;
		first = newNode;
	}
	size++;
}

LinkedListType::LinkedListType() {
	first = nullptr;
	last = nullptr;
	size = 0;
}