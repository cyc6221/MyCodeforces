#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, k;
	cin >> n >> k;
	
	int res = n;
	vector<string> a(n);//, valid(n, 1);
	for(int i=0; i<n; i++) {
		cin >> a[i];
		for(int j=0; j<k; j++) {
			if(a[i][j] != a[0][j]) {
				//valid[i] = 0;
				res--;
				break;
			}
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

