#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, t;
	cin >> n >> t;
	vector<int> a(n, 0), b(n, 0);
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	
	int res = -2, mx = -1;
	for(int i=0; i<n; i++) {
		cin >> b[i];
		if(a[i] <= t) {
			if(b[i] > mx) {
				mx = b[i];
				res = i;
			}
		}
		t--;
	}
	cout << res+1 << endl;
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

