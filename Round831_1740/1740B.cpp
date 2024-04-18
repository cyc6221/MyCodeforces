#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin >> test;
	while(test--) {
		long long n, a, b;
		cin >> n;
		vector< pair<long long, long long> > vt(n);
		for(int i=0; i<n; i++) {
			cin >> a >> b;
			if(a > b) {
				vt[i].first = a;
				vt[i].second = b;
			}
			else {
				vt[i].first = b;
				vt[i].second = a;
			}
		}
		
		long long sum = 0, mx = 0;
		for(int i = 0; i<n; i++) {
			sum += 2 * vt[i].second;
			mx = max(mx, vt[i].first);
		}
		sum += (mx + mx);
		cout << sum << endl;
	}
	return 0;
}

