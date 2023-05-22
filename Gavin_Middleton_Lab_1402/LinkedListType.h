#pragma once
#include <iostream>
#include "Student.h"
using namespace std;

struct NodeType {
public:
	Student data;
	NodeType* next;
	NodeType() {
		next = nullptr;
	}
};

class LinkedListType {
	int size;
	NodeType* first;
	NodeType* last;
public:
	bool isEmpty() const;
	int getSize() const;
	Student getFirst() const;
	Student getLast() const;
	void display() const;
	void addLast(Student studentData);
	void addFirst(Student studentData);
	LinkedListType();
};