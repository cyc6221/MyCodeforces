#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	string s;
	cin >> s;
	if(s.length() == 1) {
		if(s[0] == '0') cout << "0\n";
		else if(s[0] == '?') cout << "9\n";
		else cout << "1\n";
		return;
	}
	if(s[0] == '0') {
		cout << "0\n";
		return;
	}
	
	int res;
	if(s[0] == '?') res = 9;
	else res = 1;
	
	for(int i=1; i<s.length(); i++) {
		if(s[i] == '?') {
			if(res == 0) res = 10;
			else res *= 10;
		}
	}
	cout << res << endl;
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

