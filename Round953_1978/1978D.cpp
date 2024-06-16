#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n), res(n, 0);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    vector<ll> pre(n), post(n);
    for(ll i=0, t=-1; i<n; i++) {
        pre[i] = t;
        t = max(t, a[i]);
    }
    for(ll i=n-1, t=0; i>=0; i--) {
        post[i] = t;
        t = max(t, a[i]);
    }

    ll presum = 0;
    for(int i=0; i<n; i++) {
        if(a[i] <= pre[i] || a[i] <= a[0]+c) { //pre all killed
            if(a[i] + presum + c < post[i]) res[i] = i+1;
            else res[i] = i;
        }
        else if(a[i] >= post[i]) { // no adversary
            res[i] = 0;
        }
        else { //a[i] > pre[i]+c && a[i] < post[i]
            res[i] = i+1;
        }

        presum += a[i];
    }

    for(int i=0; i<n; i++) {
        cout << res[i] << ' ';
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

