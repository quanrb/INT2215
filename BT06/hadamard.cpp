#include "bits/stdc++.h"
using namespace std;

int mat[32][32];

void hadamard(int top, int left, int size, int sign) {
	if(size == 1) {
		mat[top][left] = sign;
	}
	else {
		hadamard(top, left, size / 2, sign);
		hadamard(top + size/2, left, size / 2, sign);
		hadamard(top, left + size/2, size / 2, sign);
		hadamard(top + size/2, left + size/2, size / 2, sign*(-1));
	}
}

int main() {
	int n;
	cin >> n;
	int N = pow(2, n);
	hadamard(0, 0, N, 1);
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			if(mat[i][j] == 1) 
				cout << ".";
			else 
				cout << "o";
		}
		cout << endl;
	}
}