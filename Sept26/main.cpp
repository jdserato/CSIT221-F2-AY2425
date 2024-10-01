#include <iostream>
#include "linkedlist.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	LinkedList* list = new LinkedList();
	list->add(13);
	list->add(3);
	list->add(1);
	list->print();
	list->print();
	list->add(24);
	list->add(25);
	list->add(26);
	list->print();
	list->remove(26);
	list->print();
	list->add(34);
	list->add(35);
	list->add(36);
	list->print();
	cout << "Fifth elem: " << list->get(5) << endl;
	return 0;
}
