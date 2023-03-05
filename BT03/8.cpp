#include "bits/stdc++.h"

using namespace std;

int pa(vector<int> &ve, int l, int r) {
    int pivot = ve[r];
    int i = l - 1;
    for(int j = l; j < r; j++) {
        if(ve[j] <= pivot) {
            ++i;
            swap(ve[i], ve[j]);
        }
    }
    ++i;
    swap(ve[i], ve[r]);
    return i;
}

void quickSort(vector<int> &ve, int l, int r) {
    if(l >= r) return;
    int p = pa(ve, l, r);
    quickSort(ve, l, p - 1);
    quickSort(ve, p + 1, r);
}

void test_case() {
	int tc;
	cin >> tc;
	vector<int> ve(tc);
	for(auto &i : ve) {
		cin >> i;
	}
	quickSort(ve, 0, tc - 1);
	int res = 0;
	for(int i = 0; i < tc; i++) {
		res += ve[i] * (tc - i - 1);
	}
	cout << res << endl;
}	

int main() {
	test_case();
}