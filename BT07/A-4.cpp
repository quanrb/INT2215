#include <iostream>
using namespace std;

int binary_search(int *a, int l, int r, int val) {
	if(l >= r) return -1;
	if(*(a + l) == val) return l;
	if(*(a + r) == val) return r;
	int mid = (l + r) / 2;
	if(*(a + mid) > val) return binary_search(a, l, mid - 1, val);
	if(*(a + mid) < val) return binary_search(a, mid + 1, r, val);
	return mid;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for(auto &x : a) {
		cin >> x;
	}
	int val;
	cin >> val;
	cout << binary_search(a, 0, n - 1, val) + 1; //khong tim duoc thi in 0 
}