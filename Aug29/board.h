#include "entry.h"
class Scoreboard{
	entry board[5];
	int size = 0;
	
	public:
	bool add(entry e) {
		board[size++] = e;
		return true;
	}
	
	void print() {
		for (int i = 0; i < 5; i++) {
			cout << i+1 << ". ";
			if (i < size) {
				entry e = board[i];
				cout << e.name << " (" << e.college << ") - " << e.score << endl;
			} else {
				cout << " (none)" << endl;
			}
		}
	}
};
