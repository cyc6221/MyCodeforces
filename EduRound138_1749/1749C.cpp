#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin >> test;
	while(test--) {
		int n, count=0, temp;
		cin >> n;

		vector<int> a(n+1, 0);
		for(int i=1; i<=n; i++) {
			cin >> temp;
			a[temp]++;
		}

		if(n % 2 == 0) {
			int k = n / 2, i;
			for(i=1; i<=n; i++) {
				//cout << i <<' ' << a[i] << endl;
				a[i] += a[i-1];
				if(a[i] <= 0) {
					break;
				}
				else {
					a[i]-=2;
				}
			}
			cout << i-1 << '\n';
		}
		else if(n % 2 == 1) {
			int k = (n+1) / 2, i;
			for(i=1; i<=n; i++) {
				a[i] += a[i-1];
				if(a[i] <= 0) {
					break;
				}
				else {
					a[i]-=2;
				}
			}
			cout << i-1 << '\n';
		}
	}
	return 0;
}

