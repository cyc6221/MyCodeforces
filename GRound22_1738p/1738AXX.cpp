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
		vector<int> skill(2, 0);
		vector<int> a(n);
		for(int i=0; i<n; i++) {
			cin >> a[i];
			skill[a[i]]++;
		}
		vector<int> b(n);
		for(int i=0; i<n; i++) cin >> b[i];
		
		long long ans = 0;
		
		if(skill[0] == skill[1]) {
			int mn = b[0];
			for(int i=0; i<n; i++) {
				ans += b[i];
				mn = min(mn, b[i]);
			}
			ans = 2 * ans - mn;
			cout << ans << '\n';
			continue;
		}
		if(skill[0] > skill[1]) {
			swap(skill[0], skill[1]);
			for(int i=0; i<n; i++) a[i] ^= 1;
		}
		vector<int> arr;
		for(int i=0; i<n; i++) {
			ans += b[i];
			if(a[i] == 0) ans += b[i];
			else arr.push_back(b[i]);
		}
		sort(arr.rbegin(), arr.rend());
		for(int i=0; i<skill[0]; i++) ans += arr[i];
		cout << ans << '\n';
	}
	return 0;
}

