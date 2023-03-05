#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

void test_case() {
	int n;
	cin >> n;
	int a[n], b[n + 1];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n + 1; i++) {
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + n + 1);
	for(int i = 0; i < n; i++) {
		if(a[i] != b[i]) {
			cout << b[i] << endl;
			return;
		}
	}
	cout << b[n] << endl;
}

int main() {
	test_case();
}	