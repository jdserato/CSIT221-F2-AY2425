#include <iostream>
#include "stackarray.h"
using namespace std;

int main() {
	Stack* stack = new StackArray();
	stack->push(5);
	stack->push(3);
	cout << stack->pop() << endl; // 3
	cout << stack->top() << endl; // 5
	cout << stack->pop() << endl; // 5
	stack->push(7);
	stack->push(9);
	stack->push(4);
	cout << stack->pop() << endl; // 4
	cout << stack->top() << endl; // 9
	stack->push(6);
	stack->push(8);
	cout << stack->pop() << endl; // 8
	cout << stack->top() << endl; // 6
	cout << "Is Empty? " << stack->isEmpty() << endl;
	cout << "Size? " << stack->size() << endl;
	return 0;
}
