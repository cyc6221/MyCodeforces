#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;
ll mod;
/*
ll fast_pow(ll x, ll n, ll mod) {
    if (n == 0)
        return 1;

    if (n & 1)
        return fast_pow((x * x) % mod, (n-1) / 2, mod) * x % mod;
    else
        return fast_pow((x * x) % mod, n / 2, mod) % mod;
}
*/

ll fast_pow(ll x, ll n) {
    if (n == 0)
        return 1;

    if (n & 1)
        return fast_pow((x * x) % mod, (n-1) / 2) * x % mod;
    else
        return fast_pow((x * x) % mod, n / 2) % mod;
}

void sol() {
    ll l, r, k;
    ll res = 0;
    mod = 1e9+7;
    cin >> l >> r >> k;

    ll cur, x;
    if(k == 1) x = 9;
    else if(k == 2) x = 4;
    else if(k == 3) x = 3;
    else if(k == 4) x = 2;
    else if(k >= 10) {
        cout << "0\n";
        return;
    }
    else x = 1;
    cur = x;

    x++; 
    ll pow1 = fast_pow(x, r-l);
    ll pow2 = fast_pow(x, l);
    //cout << pow1 << ' ' << pow2 << endl;
    //ll X = (pow1 - pow2) / (x - 1);
    ll X = (pow1 - 1);

    //X = X / (x - 1);
    while(X % (x-1) != 0) {
        X += mod;
    }
    X = X / (x-1);

    X %= mod;
    X = (X * pow2) % mod;
    cur = (cur * X) % mod;
    res = (res + cur) % mod;

    
    /*
    for(ll i = 0; i < l; i++) {
        cur = (cur * (x+1)) % mod;
    }
    for(ll i = l; i < r; i++) {
        res = (res + cur) % mod;
        cur = (cur * (x+1)) % mod;
    }
    */
    /*
    for(ll i = 0; i < r; i++) {
        if(i >= l) {
            res = (res + cur) % mod;
        }
        cur = (cur * (x+1)) % mod;
    }
    */

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