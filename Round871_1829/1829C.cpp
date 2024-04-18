#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n;
	cin >> n;
	ll a = INT_MAX, b = INT_MAX, c = INT_MAX, m;
	string s;
	for(int i=0; i<n; i++) {
		cin >> m >> s;
		if(s[0] == '1' && s[1] == '1') c = min(c, m);
		if(s[0] == '1') a = min(a, m);
		if(s[1] == '1') b = min(b, m);
	}
	ll res = min(a+b, c);
	if(res > 1000000) cout << "-1\n";
	else cout << min(a+b, c) << endl;
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

