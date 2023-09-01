#include <iostream>
#include "stack.h"

using namespace std;

int main(int argc, char** argv)
{
	Stack stack;
	ItemType item;
	int option;

	do {
		cout << "Type 0 to exit out of the program" << endl;
		cout << "Type 1 to push a element into the stack" << endl;
		cout << "Type 2 to pop a element off the stack" << endl;
		cout << "Type 3 to display all stack elements" << endl;
		cout << "Type 4 to clear the screen" << endl;
		
		cin >> option;
		switch (option) {
		case 0:
			break;
		case 1:
			cout << "Type in the element to be pushed into the stack" << endl;
			cin >> item;
			stack.push(item);
			break;
		case 2:
			item = stack.pop();
			cout << "The item " << item << " was popped off the stack" << endl;
			break;
		case 3:
			stack.display();
			break;
		case 4:
			system("cls");
			break;
		default:
			cout << "Type only numbers from the option menu!" << endl;
			break;
		}
	} while (option != 0);
}