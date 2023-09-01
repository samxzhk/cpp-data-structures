#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack() {
	this->size = 0;
	this->structure = new ItemType[MAX_ITEM];
}

Stack::~Stack() {
	delete [] this->structure;
}

bool Stack::isFull() const {
	return (this->size == MAX_ITEM);
}

bool Stack::isEmpty() const {
	return (this->size == 0);
}

void Stack::push(ItemType item)
{
	if (this->isFull()) {
		cout << "the stack is full!!!" << endl;
		return;
	}
	this->structure[this->size] = item;
	this->size += 1;
}
ItemType Stack::pop() {
	if (this->isEmpty()) {
		cout << "the stack is empty!!!" << endl;
		return 0;
	}

	ItemType popValue = this->structure[this->size - 1];
	this->size -= 1;
	return popValue;
}

void Stack::display() const {
	cout << "Stack: [";
	for (int i = 0; i < this->size; i++) {
		cout << this->structure[i] << " ";
	}
	cout << "]" << endl;
}

int Stack::length() const {
	return this->size;
}