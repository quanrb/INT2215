#include <iostream>
using namespace std;

int n = 0;

int count_even(int *a, int size) {
	int cnt = 0;
	for(int i = n; i < size + n; i++) {
		if(a[i] % 2 == 0) {
			cout << a[i] << " ";
			cnt++;
		}	
	}
	return cnt;
}

int main() {
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << count_even(&a[0], 5) << endl;
	n = 5;
	cout << count_even(&a[0], 5);
}