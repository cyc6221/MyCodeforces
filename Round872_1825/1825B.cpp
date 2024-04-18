#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n, m;
	cin >> n >> m;
	if(n > m) swap(n, m); //always m > n
	vector<ll> a(n*m);
	for(int i=0; i<n*m; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	ll mn = a[0], mn2 = a[1], mx2 = a[n*m-2], mx = a[n*m-1];
	
	ll res1 = (n-1) * (mx - mn2) + (m-1) * n * (mx - mn);
	ll res2 = (n-1) * (mx2 - mn) + (m-1) * n * (mx - mn);
	cout << max(res1, res2) << endl;
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

