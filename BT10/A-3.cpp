#include "bits/stdc++.h"
using namespace std;

struct Point {
	double x;
	double y;
	Point(double _x, double _y) {
		x = _x;
		y = _y;
	}
	void print() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
	Point midPoint(const Point b) const {
		double x1 = (x + b.x) / 2;
		double y1 = (y + b.y) / 2;
		Point tmp(x1, y1);
		return tmp;
	}
};



int main() {
	Point a(5, 3);
	Point b(3, 5);
	Point t = a.midPoint(b);
	t.print();
}
