#include "bits/stdc++.h"
using namespace std;

int n, k;

bool include(string s, char x) {
	for(int i = 0; i < (int)s.length(); i++) {
		if(s[i] == x) return false;
	}
	return true;
}

void permu(string s, int len) {
	if(len == k) {
		cout << s << "\n";
		return;
	}
	for(char x = 'a'; x < 'a' + n; x++) {
		if(include(s, x)) {
			permu(s + x, len + 1);
		}
	}
}

int main() {
	cin >> n >> k;
	permu("", 0);
	return 0;
}