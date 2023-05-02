#include "bits/stdc++.h"
using namespace std;

int strlen(char* s) {
	int cnt = 0;
	while(s[cnt] != '\0') {
		cnt++;
	}
	return cnt;
}

//a
void reverse(char *a) {
	char* s = a;
	int len = strlen(s);
	for(int i = 0; i < len / 2; i++) {
		char tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;
	}
}

//b
char* delete_char(char *a, char c) {
	char* s = new char;
	int len = strlen(a);
	int cnt = 0;
	for(int i = 0; i < len; i++) {
		if(*(a + i) != c) 
			s[cnt++] = a[i];
	}
	s[cnt] = '\0';
	return s;
}

//c
void pad_right(char *a, int n) {
	int len = strlen(a);
	if(len >= n) return;
	while(len < n) {
		a[len++] = ' ';
	}
	a[len] = '\0'; 
}

//d
void pad_left(char *&a, int n) {
	int len = strlen(a);
	if(len >= n) return;
	char *tmp = new char[n];
	int cnt = 0;
	while(cnt < n - len) {
		tmp[cnt++] = ' ';
	}
	while(cnt < n) {
		tmp[cnt] = a[cnt - n + len];
		cnt++;
	}
	tmp[n] = '\0';
	a = tmp;
}

//d
void truncate(char *&a, int n) {
	int len = strlen(a);
	if(len <= n) return;
	char *tmp = new char[n];
	int cnt = 0;
	while(cnt < n) {
		tmp[cnt] = a[cnt];
		cnt++;
	}
	tmp[n] = '\0';
	a = tmp;
}

bool is_palindrome(char *a) {
	int len = strlen(a);
	for(int i = 0; i < len / 2; i++) {
		if(a[i] != a[len - i - 1]) 
			return false;
	}
	return true;
}

void trim_left(char *&a) {
	int len = strlen(a);
	int tmp = 0;
	while(tmp < len && a[tmp] != ' ') {
		tmp++;
	}
	for(int i = 0; i < len - tmp; i++) {
		a[i] = a[i + tmp];
	}
	a[len - tmp] = '\0';
	cout << a << endl;
}

int main() {
	char* s = new char; 
	cin >> s;
	cout << strlen(s) << endl;
	// pad_left(s, 5);
	// cout << s << endl;
	// truncate(s, 2);
	// cout << s << endl;
	// cout << is_palindrome(s);
	trim_left(s);
	cout << s;
}