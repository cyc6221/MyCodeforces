#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, m, x1, x2, y1, y2, res = 4;
	cin >> n >> m >> x1 >> y1 >> x2 >> y2;
	
	if(x1 == 1) {
		if(y1 == 1 || y1 == m) res = min(res, 2);
		else res = min(res, 3);
	}
	else if(x1 == n) {
		if(y1 == 1 || y1 == m) res = min(res, 2);
		else res = min(res, 3);
	}
	
	if(x2 == 1) {
		if(y2 == 1 || y2 == m) res = min(res, 2);
		else res = min(res, 3);
	}
	else if(x2 == n) {
		if(y2 == 1 || y2 == m) res = min(res, 2);
		else res = min(res, 3);
	}
	
	if(y1 == 1) {
		if(x1 == 1 || x1 == n) res = min(res, 2);
		else res = min(res, 3);
	}
	else if(y1 == m) {
		if(x1 == 1 || x1 == n) res = min(res, 2);
		else res = min(res, 3);
	}
	
	if(y2 == 1) {
		if(x2 == 1 || x2 == n) res = min(res, 2);
		else res = min(res, 3);
	}
	else if(y2 == m) {
		if(x2 == 1 || x2 == n) res = min(res, 2);
		else res = min(res, 3);
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

