#include <bits/stdc++.h>
using namespace std;

int count(char* s, char* t) {
	int cnt = 0;
	int lens = strlen(s);
	int lent = strlen(t);
	if(lens > lent) return 0;
	for(int i = 0; i < lent; i++) {
		if(t[i] == s[0]) {
			char* tmp = new char[lent];
			int index = 0;
			for(int j = i; j < i + lens && j < lent; j++) {
				tmp[index++] = t[j];
			}
			tmp[lens] = '\0';
			if(strcmp(tmp, s) == 0) cnt++;
		}
	}
	return cnt;
}

int main() {
	char* s;
	char* t;
	cin >> s >> t;
	cout << count(s, t);
}