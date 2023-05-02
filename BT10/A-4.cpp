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
	void printxy() {
		cout << "x address: " << &x << endl << "y address: " << & y << endl;
	}
};



int main() {
	Point a(5, 3);
	cout << &a << endl;
	a.printxy();
	// Nhận xét: Địa chỉ của trường x là địa chỉ của a, y cách nó 8 bytes (kiểu double)
}
