#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n;
	cin >> n;
	vector<int> res(n);
	for(int i=0; i<n; i++) {
		char c1, c2, c3, c4;
		cin >> c1 >> c2 >> c3 >> c4;
		if(c1 == '#') res[i] = 1;
		if(c2 == '#') res[i] = 2;
		if(c3 == '#') res[i] = 3;
		if(c4 == '#') res[i] = 4;
	}
	for(int i=n-1; i>=0; i--) {
		cout << res[i] << ' ';
	}
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