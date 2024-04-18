#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	string s;
	cin >> s;
	int n = s.length(), check = 1;
	for(int i=0; i<n; i++) {
		if(s[i] != s[0]) {
			check = 0;
			break;
		}
	}
	if(check == 1) cout << "-1\n";
	else cout << n - 1 << endl;
}

int main() {
	//ios::sync_with_stdio(0);
	//cin.tie(0);

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		sol();
	}
	return 0;
}

