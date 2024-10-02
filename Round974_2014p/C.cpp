#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n, sum = 0;
	float avg;
	cin >> n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	avg = (float)sum / n;
	avg /= 2;
	//cout << "avg" << avg << endl;

	if(n == 1 || n == 2) {
		cout << -1 << endl;
		return;
	}

	sort(a.begin(), a.end());
	if(avg > a[n/2]) {
		cout << 0 << endl;
	}
	else {
		cout << a[n/2] * n * 2 + 1 - sum << endl;
	}
	/*
	for(int i=0; i<(n+1)/2; i++) {
		if()
	}
	*/
}


/*
n / 2
n = 3: 0 1 2 
n = 4: 0 1 2 3
*/

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		sol();
	}
	return 0;
}