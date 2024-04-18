#include <bits/stdc++.h>
using namespace std;

void sol() {
	int l, r, x, a, b;
	cin >> l >> r >> x >> a >> b;
	
	if(a == b) {
		cout << 0 << '\n';
		return;
	}
	if(abs(a - b) >= x) {
		cout << 1 <<'\n';
		return;
	}
	if(r - l < x) {
		cout << -1 << '\n';
		return;
	}
	
	int res=-1;
	
	if(r - a >= x) {
		if(r - b >= x) res = 2;
		else if(b - l >= x) res = 3;
	}
	if(a - l >= x) {
		if(b - l >= x) res = 2;
		else if(r - b >= x && res != 2) res = 3;
	}
	
	cout << res << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		//cout << "Case #" << i << ": ";
		sol();
	}
	return 0;
}

