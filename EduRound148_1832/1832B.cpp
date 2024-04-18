#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, k;
	cin >> n >> k;
	vector<ll> a(n);
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	ll sum = 0, temp;
	for(int i=0; i<n-k; i++) {
		sum += a[i];
	}
	temp = sum;
	for(int i=n-k, j=0; i<n; i++, j+=2) {
		temp -= a[j];
		temp -= a[j+1];
		temp += a[i];
		sum = max(sum, temp);
	}
	cout << sum << endl;
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
