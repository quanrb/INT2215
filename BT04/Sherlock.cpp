#include <iostream>
#include <string>
#include <vector>

using namespace std;
typedef long long ll;

bool checkC(int a[], int n) {
    ll sum = 0;
    for(int i  = 0; i < n; i++) {
        sum += a[i];
    }
    if(sum - a[0] == 0 || sum - a[n -1] == 0) return true;
    ll tmp = 0;
    for(int i = 0; i < n - 1; i++) {
        sum -= a[i];
        tmp += a[i];
        if(sum - a[i+1] == tmp) return true;
    }
    return false;
}

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(checkC(a, n)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}
