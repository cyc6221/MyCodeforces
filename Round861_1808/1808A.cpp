#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int x, y, res = 0, num = 0;
	cin >> x >> y;
	for(int i=x; i<=y; i++) {
		int temp = i, mn=9, mx=0;
		while(temp > 0) {
			mn = min(mn, temp%10);
			mx = max(mx, temp%10);
			temp /= 10;
		}
		if(mx - mn >= num) {
			num = mx - mn;
			res = i;
		}
		if(num == 9) {
			cout << res << endl;
			return;
		}
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

