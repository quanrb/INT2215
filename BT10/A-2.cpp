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
};

void print1(Point a) {
	cout << "(" << a.x << ", " << a.y << ")" << endl;
	cout << &a << endl;
}

void print2(Point& a) {
	cout << "(" << a.x << ", " << a.y << ")" << endl;
	cout << &a << endl;
}

int main() {
	Point a(5, 3);
	cout << &a << endl;
	print1(a);
	print2(a);
}
