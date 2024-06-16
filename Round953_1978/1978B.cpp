#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
    ll n, a, b;
    cin >> n >> a >> b;

    if(b+1-a < 0) {
        cout << n * a << endl;
        return;
    }
    if(b+1-a > min(n, b)) {
        ll k = min(n, b);
        ll temp = (2*b+1-k) * k / 2 + (n-k) * a;
        cout << temp << endl;
        return;
    }

    ll res = (b+a) * (b+1-a) / 2 + (n-b-1+a) * a;
    
    /*
    for(ll k=0; k<=min(n, b); k++) {
        ll temp = (2*b+1-k) * k / 2 + (n-k) * a;
        res = max(res, temp);
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

