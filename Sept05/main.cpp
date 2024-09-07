#include <iostream>
#include "course.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << sizeof(Course);
	Course* csit = new Course("DSA");
	char op;
	Student s;
	while (true) {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'a':
//				s = new Student;
				cout << "Name: ";
				cin >> s.name;
				csit->addStudent(s);
				break;
			case 'p':
				csit->print();
				break;
			case 'x':
				return 0;
		}
	}
	return 0;
}
