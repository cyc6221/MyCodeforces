#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, res = 0, temp = 0;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++) {
		cin >> a[i];
		if(a[i] == 1) {
			res = max(res, temp);
			temp = 0;
		}
		else {
			temp ++;
		}
	}
	res = max(res, temp);
	cout << res << endl;
}

int main() {
	//ios::sync_with_stdio(0);
	//cin.tie(0);

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		sol();
	}
	return 0;
}

