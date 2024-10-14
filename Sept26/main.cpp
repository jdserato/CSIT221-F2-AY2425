#include <iostream>
#include "linkedlist.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	LinkedList* list = new LinkedList();
	list->add(13);
	list->add(3);
	list->add(1);
	list->add(24);
	list->add(25);
	list->add(26);
	list->add(34);
	list->add(35);
	list->add(36);
	list->print();
	delete list;
	list = new LinkedList();
	list->add(50);
	list->add(51);
	list->add(52);
	list->add(53);
	list->add(54);
	list->add(55);
	list->add(56);
	list->add(57);
	list->add(58);
	list->add(59);
	list->add(60);
	list->print(); 
	return 0;
}
