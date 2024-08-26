#include "list.h"
#include <iostream>
using namespace std;

class ArrayList : public List {
	public:
	int size = 0;
	int array[500000];
	void add(int num) {
		if (size == 5) {
			cout << "Stop";
			return;
		}
		cout <<num << " to be added" << endl;
		array[size++] = num;
	}
	
	int get(int pos) {
		return array[pos-1];
	}
	
	void print() {
		cout << "Size = "<< size << endl;
		for (int i = 0; i < size; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
};
