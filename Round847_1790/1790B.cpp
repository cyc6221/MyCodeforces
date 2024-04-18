#include <bits/stdc++.h>
using namespace std;

void sol() {
	int n, s, r;
	cin >> n >> s >> r;
	vector<int> vt(n, 1);
	vt[0] = s-r;
	int cur = n - 1 + s - r;
	int mx = s-r-1;
	for(int i = 1; i < n && cur != s; i++) {
		if(s - cur < mx) {
			vt[i] += s - cur;
			break;
		}
		else {
			cur += mx;
			vt[i] += mx;
		}
	}
	for(auto i : vt) cout << i << ' ';
	cout << endl;
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

