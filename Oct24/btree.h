#include "node.h"
#include <iostream>
#include <stdexcept>
using namespace std;

class BinaryTree {
	node* root;
	int size;
	
	void print(node* n) { // in-order traversals
		if (n->left) {
			print(n->left);
		}
		cout << n->elem << endl;
		if (n->right) {
			print(n->right);
		}
	}
	
	public:
		
	BinaryTree() {
		root = NULL;
		size = 0;
	}
	// TODO
	node* addRoot(int num) {
		throw logic_error("error");
	}   
	// TODO
	node* addLeft(node* p, int num) {
		
	}
	
	void print() { 
		cout << "Size: " << size << endl;
		print(root);
	}
};
