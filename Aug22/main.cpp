#include <iostream>
#include "point.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	cout << sizeof(Point) << endl;
	Point p1;
	p1.x = 1;
	p1.y = 1;
	Point p2;
	p2.x = 5;
	p2.y = 3;
	Point res = p1.midpoint(p2);
	cout << res.x << " " << res.y;
}
