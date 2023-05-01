#include "bits/stdc++.h"
using namespace std;

int used[1001];
int n;
int x[100];
int col[1001], c1[1001], c2[1001];
char board[1001][1001];

void print() {
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(j == x[i]) 
				cout << "Q" << " ";
			else 
				cout << " " << " ";
		}
		cout << endl;
	}
}

void backtracking(int i) {
	for(int j = 1; j <= n; j++) {
		if(col[j] == 0 && c1[i - j + n] == 0 && c2[i + j - 1] == 0) {
			col[j] = 1;
			c1[i - j + n] = 1;
			c2[i + j - 1] = 1;
			x[i] = j;
			if(i == n) 
				print();
			else 
				backtracking(i + 1);
			col[j] = 0;
			c1[i - j + n] = 0;
			c2[i + j - 1] = 0;
		}
	}
}

void test_case() {
	cin >> n;
	backtracking(1);
}

int main() {
	test_case();
}