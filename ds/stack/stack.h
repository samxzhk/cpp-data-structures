#pragma once

typedef int ItemType;
const int MAX_ITEM = 100;

class Stack {
private:
	int size; // the current size of the stack
	ItemType* structure; // a array that will contain all the items of the stack
public:
	Stack(); // constructor
	~Stack(); // destructor
	bool isFull() const; // check if stack is full 
	bool isEmpty() const; // check if stack is empty
	void push(ItemType); // push a item to the end of the stack
	ItemType pop(); // pop the last element from the stack
	int length() const; // the size of the stack
	void display() const; // display all the elements of the stack
};