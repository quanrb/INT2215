#include "bits/stdc++.h"
using namespace std;

char* concat(const char* s, const char* t) {
	int lens = strlen(s);
	int lent = strlen(t);
	int len = lens + lent;
	char* res = new char[len + 1];
	for(int i = 0; i < lens; i++) {
		res[i] = s[i];
	}
	for(int j = 0; j < lent; j++) {
		res[lens + j] = t[j];
	}
	res[len] = '\0';
	return res;
}

int main() {
	char s[] = "Hello ";
	char t[] = "World";
	char* res = concat(s, t);
	cout << res << endl;
}