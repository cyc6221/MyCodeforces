#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		int div = n / 2;
		vector<int> vt;
		for(int x = 0; x<div; x++){
			for(int i=div-x; i<=n; i+=div) {
				vt.push_back(i);
			}
		}
		for(int i=0; i<n; i++) {
			cout << vt[i] << ' ';
		}
		cout << '\n';
	}
	return 0;
}

