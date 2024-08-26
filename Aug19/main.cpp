#include <iostream>
#include "arraylist.h"
using namespace std;

int main() {
	List* list = new ArrayList();
	list->add(13);
	list->add(4);
	list->add(7);
	list->add(9);
	list->add(10);
	list->add(15);
	list->add(20);
	list->add(25);
	list->add(10);
	list->add(15);
	list->add(20);
	list->add(25);
	list->print();
	cout << "Third element is : " << list->get(3) <<endl;//7
	cout << "Fifth element is : " << list->get(5) <<endl;//10
	return 0;
}
