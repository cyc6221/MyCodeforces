#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, vector<int>> loc;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        loc[a[i] & ~3].push_back(i);
    }
    for(auto &[num, vt] : loc) {
        vector<int> val;
        for(int i=0; i<vt.size(); i++) val.push_back(a[vt[i]]);
        sort(val.begin(), val.end());
        for(int i=0; i<val.size(); i++) a[vt[i]] = val[i];
    }
    for(int i=0; i<n; i++) {
        cout << a[i] << ' ';         
    }
    cout << endl;
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