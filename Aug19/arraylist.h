#include "list.h"
#include <iostream>
#include <cstdlib>
using namespace std;

class ArrayList : public List {
	public:
	int size;
	int* array;
	int cap;
	ArrayList() {  
		cap = 5;
		array = (int*) malloc(cap * sizeof(int));
		size = 0;
	}
	void add(int num) {
		if (size == cap) {
			cout << "REALLOCATING..." << endl;
			cap = cap * 1.5;
			array = (int*) realloc(array, cap * sizeof(int)); // array, new size
//			return;
		}
		cout <<num << " to be added" << endl;
		array[size++] = num;
	}
	
	int get(int pos) {
		return array[pos-1];
	}
	
	void print() {
		cout << "Size = "<< size << "/" << cap << endl;
		for (int i = 0; i < size; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
};
