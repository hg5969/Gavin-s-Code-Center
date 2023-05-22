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

LinkedListType::LinkedListType() {
	first = nullptr;
	last = nullptr;
	size = 0;
}