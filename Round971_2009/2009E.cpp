#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n, k;
	cin >> n >> k;

	ll res = 1e18;

	ll l = k, r = n + k - 1;
	ll i = k, j = n + k - 1, mid;
	ll A, B;
	while(i < j) {
		mid = (i+j) / 2;
		A = (l+mid)*(mid-l+1)/2;
		B = (mid+1+r)*(r-mid)/2;

		//cout << A << ' ' << B << endl;

		res = min(res, abs(A-B));
		//cout << res << endl;

		if(A == B) break;

		if(A<B) i = mid;
		else if(A>B) j = mid;
		else break;

		if(i+1 == j) break;
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