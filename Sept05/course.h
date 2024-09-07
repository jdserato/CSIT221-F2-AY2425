#include "student.h"
#include <iostream>
using namespace std;
class Course {
	string name; // 8
	Student* students; // 8
	int size ; // 4
	int capacity; // 4
	
	public:
	Course(string name) {
		this->name = name;
		size = 0;
		capacity = 10;
		students = new Student[capacity];
//		students = (Student**) malloc (sizeof(Student*) * capacity);
		cout << "Allocated done" << endl;
	}
	
	void addStudent(Student s) {
		cout << "ADDING " << s.name << endl;
		students[size++] = s;
		
		cout << "DONE" << endl;
	}
	
	void print() {
		cout << name << endl;
		cout << "Student Size: " << size << endl;
		for (int i = 0; i < size; i++) {
			cout << i+1 << ". " << students[i].name << endl;
		}
	}
};
