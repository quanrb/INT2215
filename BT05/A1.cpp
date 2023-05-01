#include <bits/stdc++.h>

using namespace std;

int main() {
	int a[3];
	char b[3];
	for(int i = 0; i < 3; i++) {
		cin >> a[i];
		cout << &a[i] << " "; //cách nhau 4 byte
	}
	cout << endl;
	for(int i = 0; i < 3; i++) {
		cin >> b[i];
		cout << (void *) &b[i] << " "; //mỗi char ở 1 ô nhớ, tức 1 byte
	
}}

