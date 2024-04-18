#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

int mex(vector<int> a) {
	int res = -1;
	sort(a.begin(), a.end());
	for(auto& i : a) {
		if(i == res);
		else if(i == res+1) res = i;
		else break;
	}
	return res+1;
}

void sol() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	
	//cout << mex(a) << endl;
	int mx1 = mex(a);
	
	int x = -1, y = -1;
	for(int i=0; i<n; i++) {
		if(a[i] == mx1+1) {
			if(x == -1) x = i;
			y = i;
		}
	}
	
	if(x != -1) {
		for(int j=x; j<=y; j++) {
			a[j] = mx1;
		}
	}
	else {
		sort(a.begin(), a.end());
		bool check = 0;
		for(int i=0; i+1<n; i++) {
			if(a[i] == a[i+1]) {
				a[i+1] = mx1;
				check = 1;
				break;
			}
		}
		if(!check) a.back() = mx1;
	}
	
	int mx2 = mex(a);
	//cout << "one " << mx1 << " two " << mx2 << endl;
	if(mx2 == mx1+1) cout << "Yes\n";
	else cout << "No\n";
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

