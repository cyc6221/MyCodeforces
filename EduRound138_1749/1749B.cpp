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
		unsigned long long int sum = 0, mx = 0, temp;
		vector<unsigned long long int> b(n);
		for(int i=0; i<n; i++) {
			cin >> temp;
			sum += temp;
		}
		for(int i=0; i<n; i++) {
			cin >> b[i];
			sum += b[i];
			mx = max(mx, b[i]);
		}
		sum -= mx;
		cout << sum << '\n';
	}
	return 0;
}

