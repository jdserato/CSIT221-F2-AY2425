#include "list.h"
#include "node.h"
#include <iostream>
using namespace std;
class LinkedList : public List {
	node* head;
	node* tail;
	int size;
	
	public:
	int getSize() {
		return size;
	}
	void addTail(int num) {
		if (!head) {
			head = new node;
			head->elem = num;
			head->next = nullptr;
			tail = head;
		} else {
			node* n = (node*) calloc(1, sizeof(node));
			n->elem = num;
			tail->next = n;
			tail = n;
		}
		size++;
	}
	void add(int num) { // addHead
		if (!head) {
			head = new node;
			head->elem = num;
			head->next = nullptr;
			tail = head;
		} else {
			node* n = (node*) calloc(1, sizeof(node));
			n->elem = num;
			n->next = head;
			head = n;
		}
		size++;
	}
	int removeHead() {
		int tmp = head->elem;
		node* stuff = head;
		head = head->next;
		free(stuff);
		size--;
		return tmp;
	}
	int get(int pos) {
		node* curr = head;
		for (int i = 1; i < pos; i++) {
			curr = curr->next;
		}
		return curr->elem;
	}
	void print() {
		cout << "Size: " << size << endl;
		node* curr = head;
		while (curr) {
			cout << curr->elem << " -> ";
			curr = curr->next;
		}
		cout << endl << "address: ";
		curr = head;
		while (curr) {
			cout << curr << " -> ";
			curr = curr->next;
		}
		cout << endl << "tail: ";
		curr = tail;
		while (curr) {
			cout << curr->elem << " -> ";
			curr = curr->next;
		}
	}
};
