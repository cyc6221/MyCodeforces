#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, mx=0, z=0;
	cin >> n;
	
	vector<int> vt(n);
	for(int i=0; i<n; i++) {
		cin >> vt[i];
		if(vt[i] == 0) z++;
		mx = max(mx, vt[i]);
	}

	if(z <= (n+1)/2) {
		cout << "0\n";
	}
	else if(mx == 1) {
		cout << "2\n";
	}
	else {
		cout << "1\n";
	}
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

