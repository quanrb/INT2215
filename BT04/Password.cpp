#include <iostream>
#include <string>
#include <vector>

using namespace std;

string checkC(string s) {
	string res = "";
	int len = s.length();
	for(int i = 0; i < len; i++) {
		res += s[len - i - 1];
	}
	return res;
}

int main() {
	int n;
	cin >> n;
	std::vector<string> ve;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		ve.push_back(s);
	}
	for(int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++) {
			if(checkC(ve[i]) == ve[j]) {
				cout << ve[i].length() << " " << ve[i][ve[i].length() / 2] << endl;
				break;
			}
		}
	}
}