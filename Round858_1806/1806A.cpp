#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	
	if(y1 > y2) {
		cout << "-1\n";
		return;
	}
	
	int step = 0;
	step += y2 - y1;
	x1 += step;
	if(x1 < x2) {
		cout << "-1\n";
		return;
	}
	step += x1 - x2;
	cout << step << endl;
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

