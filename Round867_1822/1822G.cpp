#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, res = 0;
	cin >> n;
	vector<int> a(n, 0);
	multiset <int> s;
	for(int i=0; i<n; i++) {
		cin >> a[i];
		s.insert(a[i]);
	}
	
	sort(a.begin(), a.end());
	auto it = unique(a.begin(), a.end()); // it ?«¬? vector<Point>::iterator
    a.erase(it, a.end());
	
	for(int i=0; i+2<a.size(); i++) {
		int cnt = s.count(a[i]);
		cout << cnt << endl;
		if(cnt > 2) {
			ll num = 1;
			for(ll temp = 2; temp <= cnt; temp++) num *= temp;
			res += num;
		}
		for(int j=i+1; j+1<a.size(); j++) {
			if(a[j] % a[i] == 0) {
				for(int k=j+1; k<a.size(); k++) {
					if(a[k] % a[j] == 0 && a[k] / a[j] == a[j] / a[i]) {
						res += s.count(a[i]) * s.count(a[j]) * s.count(a[k]);
					}
				}
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
