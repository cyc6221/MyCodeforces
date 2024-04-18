#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n;
	cin >> n;
	if(n == 1) {
		int a, b;
		cin >> a >> b;
		cout << abs(a-b) << endl;
		return;
	}
	vector<int> vt(2*n);
	for(int i=0; i<2*n; i++) {
		cin >> vt[i];
	}
	sort(vt.rbegin(), vt.rend());
	int res = abs(vt[0]-2);
	int res2 = abs(vt[0]-2);
	for(int i=1; i<2*n; i++) {
		res += abs(vt[i]+1);
		res2 += abs(vt[i]-2);
	}
	cout << min(res, res2) << endl;
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

