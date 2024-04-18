#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend());
	int pos = n, neg = 0;
	for(int i=0; i<n; i++) {
		if(a[i] <= neg) {
			cout << neg << endl;
			return;
		}
		else {
			while(i+1 < n && a[i] == a[i+1]) {
				neg++;
				i++;
			}
			neg++;
			pos--;
		}
	}
	if(neg == n) cout << "-1\n";
	else cout << neg << endl;
}

int main() {
	//ios::sync_with_stdio(0);
	//cin.tie(0);

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		sol();
	}
	return 0;
}

