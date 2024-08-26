struct Point {
	double a;
	int x, y, z;
	char ch1, ch2, ch3, ch4, ch5; //p1
						// p2
	Point midpoint(Point other) {
		Point mid;
		mid.x = (x + other.x) / 2;
		mid.y = (y + other.y) / 2;
		return mid;
	}
};
