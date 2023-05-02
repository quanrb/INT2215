#include "bits/stdc++.h"
using namespace std;

int main() {
	char* a = new char[10];
	char* c = a + 3;
	for (int i = 0; i < 9; i++) a[i] = 'a'; 
	a[9] = '\0';
	cerr <<"a: " << "-" << a << "-" << endl;
	cerr <<"c: " << "-" << c << "-" << endl;
	delete c; // c không phải con trỏ được khởi tạo cấp phát động như new int, new char,... nên *không* lỗi?
	cout << "a after deleting c:" << "-" << a << "-" << endl;

}