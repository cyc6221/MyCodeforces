#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n, m, l=0, r=0;
	cin >> n >> m;
	vector<ll> a(n), b;
	set<ll> s;
	for(int i=0; i<n; i++) {
		cin >> a[i];
		if(a[i] == -1) l++;
		else if(a[i] == -2) r++;
		else s.insert(a[i]);
	}
	for(auto& i : s) b.push_back(i);
	ll res = 0, lnum = 0, rnum = s.size()-1, temp, sz = s.size();
	for(auto& i : b) {
		temp = min(i-1, l+lnum) + min(m-i, r+rnum) + 1;
		res = max(res, temp);
		lnum++, rnum--;
	}
	//if(!s.count(0)) {
		temp = min(m, r+sz);
		res = max(res, temp);
	//}
	//if(!s.count(m)) {
		temp = min(m, l+sz);
		res = max(res, temp);
	//}
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

