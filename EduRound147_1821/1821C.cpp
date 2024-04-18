#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	string s;
	cin >> s;
	vector<int> al(26, 0);
	int mx = 0, n = s.length(), res = 0;
	for(auto& i : s) {
		al[i-'a']++;
	}
	for(auto& i : al) {
		mx = max(mx, i);
	}
	//cout << mx << endl;
	while(n > mx) {
		if(n % 2 == 0) n -= n / 2;
		else n -= (n+1) / 2;
		res++;
	}
	cout << res << endl;
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

