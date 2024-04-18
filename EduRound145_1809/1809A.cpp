#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	if(s[0] == s[1] && s[1] == s[2]) {
		if(s[2] == s[3]) {
			cout << "-1\n";
		}
		else {
			cout << "6\n";
		}
		return;
	}
	if(s[1] == s[2] && s[2] == s[3]) {
		cout << "6\n";
		return;
	}
	cout << "4\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		sol();
	}
	return 0;
}

