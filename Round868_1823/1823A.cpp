#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, k;
	cin >> n >> k;
	int pos = n, neg = 0, sum;
	for(pos = n; pos >= 0; pos--, neg++) {
		sum = (pos-1) * pos / 2;
		sum += (neg-1) * neg / 2;
		if(sum == k) {
			cout << "YES\n";
			for(int i=1; i<=pos; i++) cout << "1 ";
			for(int i=1; i<=neg; i++) cout << "-1 ";
			cout << endl;
			return;
		}
	}
	cout << "NO\n";
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

