#include <bits/stdc++.h>
using namespace std;

void sol() {
	int n, k, l=0, r=0;
	cin >> n >> k;
	for(int i=0, a, b; i<n; i++) {
		cin >> a >> b;
		if(a == k) l = 1;
		if(b == k) r = 1;
	}
	if(l == 1 && r == 1) cout << "YES\n";
	else cout << "NO\n";
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

