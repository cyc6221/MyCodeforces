#include <bits/stdc++.h>
using namespace std;

void sol() {
	int n;
	cin >> n;
	vector<long long> a(n), b(n), d(n, 0);
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	for(int i=0; i<n; i++) {
		cin >> b[i];
	}

	for(int i=0; i<n; i++) {
		for(int j=i; a[i] > 0 && j<n; j++) {
			d[j] += min(a[i], b[j]);
			a[i] -= min(a[i], b[j]);
		}
		cout << d[i] << ' ';
	}
	//for(auto& i : d) cout << i << ' ';
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

