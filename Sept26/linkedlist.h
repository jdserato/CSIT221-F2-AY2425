#include "list.h"
#include "node.h"
#include <iostream>
using namespace std;
class LinkedList : public List {
	node* head;
	node* tail;
	int size;
	
	public:
	LinkedList() {
		head = new node;
		tail = new node;
		head->next = tail;
		tail->prev = head;
	}
	void add(int num) {
		add_between(num, tail->prev, tail);
	}
	node* add_between(int num, node* pred, node* succ) {
		node* n = new node;
		n->elem = num;
		n->prev = pred;
		n->next = succ;
		pred->next = n;
		succ->prev = n;
		size++;
	}
	void addHead(int num) { // addhead
		add_between(num, head, head->next);
	}
	int removeHead() {
		int tmp = head->elem;
		node* stuff = head;
		head = head->next;
		free(stuff);
		return tmp;
	}
	int get(int pos) {
		node* curr = head;
		for (int i = 1; i < pos; i++) {
			curr = curr->next;
		}
		return curr->elem;
	}
	void remove_node(node* n) {
		node* next = n->next;
		node* prev = n->prev;
		prev->next = next;
		next->prev = prev;
		free(n);
	}
	
	int remove(int num) {
		node* curr = head;
		int pos = 1;
		while (curr->elem != num) {
			curr = curr->next;
			pos++;
		}
		remove_node(curr);
		return pos;
	}
 	void print() {
		cout << "Size: " << size << endl<<"head:";
		node* curr = head->next;
		while (curr != tail) {
			cout << curr->elem << " -> ";
			curr = curr->next;
		}
		cout << endl << "tail: ";
		curr = tail->prev;
		while (curr != head) {
			cout << curr->elem << " -> ";
			curr = curr->prev;
		}
		cout << endl ;
	}
};
