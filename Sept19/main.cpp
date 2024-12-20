#include <iostream>
#include "singlyqueue.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Queue* queue = new SinglyQueue();
	char op;
	int num;
	while (true) {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'e':
				cin >> num;
				queue->enqueue(num);
				break;
			case 'd':
				cout << "Dequeued: " << queue->dequeue() << endl;
				break;
			case 'f':
				cout << "First: " << queue->first() << endl;
				break;
			case 's':
				cout << "Size: " << queue->size() << endl;
				break;
			case '?':
				cout << "Is Empty? " << queue->isEmpty() << endl;
				break;
			case 'x':
				return 0;
		}
	}
	return 0;
}
