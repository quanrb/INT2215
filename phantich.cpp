#include <bits/stdc++.h>
using namespace std;

int *a;
int N, temp = 0;

bool check(int i, int n) {
	if(n == 0) return true;
	if(i <= a[n - 1]) return true;
	return false;
}

void print(int n) {
	for(int i = 0; i <= n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void backtracking(int n) {
	for(int i = N - 1; i >= 1; i--) {
		if(check(i, n)) {
			temp += i;
			a[n] = i;
			if(temp == N) {
				print(n);
			}
			else if(temp < N) 
				backtracking(n + 1);
			temp -= i;
		}
	}
}

void test_case() {
	cin >> N;
	a = new int[N];
	backtracking(0);
}

int main() {
	test_case();
}