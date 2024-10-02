#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
    int n, d, k;
    cin >> n >> d >> k;

    //vector<int> D(n+1, 0);
    map<int, vector<int>> D;
    for(int i=0; i<k; i++) {
        int l, r;
        cin >> l >> r;
        for(int i=l; i<=r; i++) D[i].push_back(i);
    }
    /*
    vector<int> pre(n+1, 0);
    for(int i=1; i<=n; i++) {
        pre[i] = pre[i-1] + D[i];
    }
    */

    
    multiset<int> cur;
    for(int i=1; i<=d; i++) {
        for(auto& x : D[i]) cur.insert(x);
    }
    int mx = cur.size(), mx_i = 1, mn = cur.size(), mn_i = 1;

    for(int i=1; i+d<=n; i++) {
        for(auto& x : D[i]) cur.erase(cur.find(x));
        for(auto& y : D[i+d]) cur.insert(y);

        if(cur.size() > mx) {
            mx = cur.size();
            mx_i = i+1;
        }
        if(cur.size() < mn) {
            mn = cur.size();
            mn_i = i+1;
        }

        /*
        if(pre[i+d] - pre[i] > mx) {
            mx = pre[i+d] - pre[i];
            mx_i = i + 1;
        }
        if(pre[i+d] - pre[i] < mn) {
            mn = pre[i+d] - pre[i];
            mn_i = i + 1;
        }
        */
    }
    cout << n << ' ' << d << ' ' << k << endl;
    cout << mx << ' ' << mn << endl;
    cout << mx_i << ' ' << mn_i << endl;
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