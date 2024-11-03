#include <iostream>
#include "btree.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	BinaryTree* tree = new BinaryTree();
	node* nine = tree->addRoot(9);
	node* thirteen = tree->addLeft(nine, 13);
	try {
		node* twenty = tree->addLeft(nine, 20);
	} catch (exception& e) {
		cout << e.what();
	}
	tree->print();
	return 0;
}
