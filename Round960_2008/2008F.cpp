#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
    int n;
    cin >> n;
    vector<ll> vt(n);
    for(int i=0; i<n; i++) {
        cin >> vt[i];
    }

    ll res = 0;
    ll mod = 1e9+7;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            res += vt[i] * vt[j];
            res %= mod;
        }
    }

    res = (res * 2) % mod;
    
    int c1 = 0, c2 = 0;
    while(!c1 || !c2) {
        if(!c1 && res % n == 0) {
            res /= n;
            c1 = 1;
        }
        if(!c2 && res % (n-1) == 0) {
            res /= (n-1);
            c2 = 1;
        }
        res += mod;
    }
    /*
    while(res % n != 0) {
        res += mod;
    }
    res /= n;
    while(res % (n-1) != 0) {
        res += mod;
    }
    res /= (n-1);
    */
    res %= mod;

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

