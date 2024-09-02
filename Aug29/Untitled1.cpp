#include <iostream>
#include <cstdlib>
using namespace std;

struct node {
	node* prev;
	node* next;
	int elem;
};

int main() {
	cout << "SIZE: " << sizeof(node);
	return 0;
}
