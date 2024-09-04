#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int x, y, k;
	cin >> x >> y >> k;

	int xx = x / k, yy = y / k;
	if(x % k != 0) xx++;
	if(y % k != 0) yy++;

	if(xx - yy > 1) { //5 3
		cout << 2 * xx - 1 << endl;
	}
	else if(yy - xx > 0) { //3 4
		cout << 2 * yy << endl;
	}
	else {
		cout << xx + yy << endl;
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