#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n;
	cin >> n;
	vector<vector<int>> res(2, vector<int>(n, 0));
	
	int x = 2 * n - 1, y = 1;
	for(int i=0; i<n; i+=2) {
		res[0][i] = x;
		x -= 2;
	}
	for(int i=n-1; i>=0; i-=2) {
		res[0][i] = y;
		y += 2;
	}
	x = 2 * n, y = 2;
	for(int i=n-2; i>=0; i-=2) {
		res[1][i] = y;
		y += 2;
	}
	for(int i=n-3; i>=1; i-=2) {
		res[1][i] = y;
		y += 2;
	}
	res[1][n-1] = y;
	
	for(auto& i : res) {
		for(auto& j : i) {
			cout << j << ' ';
		}
		cout << endl;
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

