#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	int count[10001];
	memset(count, 0, 10001);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		count[a[i]]++;
		if(count[a[i]] >= 2) {
			cout << "Yes";
			return 0;
		}
	}
	cout << "No";
}