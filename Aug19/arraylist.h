#include "list.h"
#include <iostream>
using namespace std;

class ArrayList : public List {
	int array[5];
	int size = 0;
	
	public:
	void add(int num) {
		cout <<num << " to be added" << endl;
		array[size++] = num;
	}
	
	int get(int pos) {
		 // ??????
	}
	
	void print() {
		cout << "Size = "<< size << endl;
		for (int i = 0; i < size; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
};
