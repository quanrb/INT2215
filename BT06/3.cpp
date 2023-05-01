#include "bits/stdc++.h"
using namespace std;

int n, k;

bool include(string s, char x) {
	for(int i = 0; i < (int)s.length(); i++) {
		if(s[i] == x) return false;
	}
	return true;
}

void combi(string s, int len, char a) {
	if(len >= 1) {
		cout << s << endl;
	}
	if(len > n) return;
	for(char x = a; x < 'a' + n; x++) {
		if(include(s, x)) {
			combi(s + x, len + 1, x);
		}
	}
}

int main() {
	cin >> n >> k;
	combi("", 0, 'a');
	return 0;
}