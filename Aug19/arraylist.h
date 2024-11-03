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
		array = (int*) calloc(cap , sizeof(int));
		size = 0;
	}	
	void add(int num) { // addLast
		if (size == cap) {
			cout << "REALLOCATING..." << endl;
			cap = cap * 1.5;
			cout << "BEFORE: " << array << endl;
			array = (int*) realloc(array, cap * sizeof(int)); // array, new size

			cout << "AFTER: " << array << endl;//			return;
		}
		cout <<num << " to be added" << endl;
		array[size++] = num;
	}
	
	int removeLast() {
		return array[--size];
	}
	
	void addFirst(int num) {
		if (size == cap) {
			cout << "REALLOCATING..." << endl;
			cap = cap * 1.5;
			cout << "BEFORE: " << array << endl;
			array = (int*) realloc(array, cap * sizeof(int)); // array, new size

			cout << "AFTER: " << array << endl;//			return;
		}
		// Move all elements from index 0
		for (int i = size-1; i >= 0; i--) {
			array[i+1] = array[i];
		}
		array[0] = num;
		size++;
	}
	
	int removeFirst() {
		int tmp = array[0];
		// Move all elements to left
		for (int i = 0; i < size-1; i++) {
			array[i] = array[i+1];
		}
		size--;
		return tmp;
	}
	
	int get(int pos) {
		return array[pos-1];
	}
	
	int getSize() {
		return size;
	}
	
	void print() {
		cout << "Size = "<< size << "/" << cap << endl;
		for (int i = 0; i < size; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
};
