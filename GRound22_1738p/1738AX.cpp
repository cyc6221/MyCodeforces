#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		vector<int> cnt(2);
		vector<int> a(n);
		for(int i=0; i<n; i++) {
			cin >> a[i];
			cnt[a[i]]++;
		}
		vector<int> b(n);
		for(int i=0; i<n; i++) {
			cin >> b[i];
		}
		if(cnt[0] == cnt[1]) {
			long long ans = 0;
			int mn = b[0];
			for(int i=0; i<n; i++) {
				ans += b[i];
				mn = min(mn, b[i]);
			}
			ans = 2 * ans - mn;
			cout << ans << endl;
			continue;
		}
		if(cnt[0] > cnt[1]) {
			swap(cnt[0], cnt[1]);
			for(int i=0; i<n; i++) {
				a[i] ^= 1;
			}
		}
		vector<int> all;
		long long ans = 0;
		for(int i=0; i<n; i++) {
			ans += b[i];
			if(a[i] == 0) ans += b[i];
			else all.push_back(b[i]);
		}
		sort(all.rbegin(), all.rend());
		for(int i=0; i<cnt[0]; i++) {
			ans += all[i];
		}
		cout << ans << endl;
	}
	return 0;
}
