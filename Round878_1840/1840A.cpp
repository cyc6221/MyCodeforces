#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n;
	string s, res;
	cin >> n >> s;
	for(int i=0; i<n; i++) {
		res += s[i];
		char pre = s[i];
		while(i < n) {
			i++;
			if(s[i] == pre) break;
		}
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

