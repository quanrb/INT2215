#include "bits/stdc++.h"
using namespace std;

int main() {
	int n; cin >> n;
	int **sec = new int*[1];
	sec[0] = new int[n];
	for(int i = 0; i < n; i++) {
		cin >> sec[0][i];
		cout << sec[0][i];
	}
	delete sec[0];
}