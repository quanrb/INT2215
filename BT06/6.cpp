//Johnson Trotter
#include "bits/stdc++.h"
using namespace std;

int n;

string insert(string s, int i, int place) {
	string x = to_string(i);
	string tmp = "";
	if((int)s.length() == 0) return x;
	if(place == 0) {
		tmp = x + s;
		return tmp;
	}
	if(place == (int)s.length()) return s + x;
	for(int i = 0; i < place; i++) {
		tmp += s[i];
	}
	tmp += x;
	for(int i = place; i < (int)s.length(); i++) {
		tmp += s[i];
	}
	return tmp;
}

void johnson(string s, int i, int len) {
	if(len == n) {
		cout << s << endl;
		return;
	}
	for(int j = len; j >= 0; j--) {
		johnson(insert(s, i + 1, j), i + 1, len + 1);
	}
}

int main() {
	cin >> n;
	johnson("1", 1, 1);
}