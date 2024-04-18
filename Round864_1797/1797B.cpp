#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, k, cnt = 0;
	cin >> n >> k;
	vector<vector<int>> g(n, vector<int>(n, 0));
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> g[i][j];
		}
	}
	
	for(int i=0; i<n/2; i++) {
		for(int j=0; j<n; j++) {
			if(g[i][j] != g[n-i-1][n-j-1]) cnt++;
		}
	}
	if(n % 2 == 1) {
		for(int j=0; j<n/2; j++) {
			if(g[n/2][j] != g[n/2][n-j-1]) cnt++;
		}
	}
	
	///cout << cnt << endl;
	if(n % 2 == 1) {
		if(k >= cnt) cout << "YES\n";
		else cout << "NO\n";
	}
	else {
		if(k >= cnt && (k-cnt) % 2 == 0) cout << "YES\n";
		else cout << "NO\n";
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

