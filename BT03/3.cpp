#include <bits/stdc++.h>
using namespace std;

bool checkC(int n) {
	int res = 0, tmp = n;
	while(n) {
		res = res * 10 + n%10;
		n /= 10;
	}
	return (res == tmp);
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		int a, b;
		cin >> a >> b;
		int cnt = 0;
		for(int i = a; i <= b; i++) {
			if(checkC(i)) cnt++;
		}
		cout << cnt << endl;
	}
}