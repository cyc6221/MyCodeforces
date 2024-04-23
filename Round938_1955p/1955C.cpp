#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
    ll n, k;
    cin >> n >> k;
    vector<ll> ship(n+1, 0);
    for(ll i=0, temp; i<n; i++) {
        cin >> temp;
        ship[i+1] = ship[i] + temp;
    }
    if(k >= ship[n]) {
        cout << n << endl;
        return;
    }

    ll A, B;
    ll a = (k+1) / 2, b = ship[n] - (k / 2);
    //cout << "ab " << a << ' ' << b << endl;
    if(a == b) {
        cout << n << endl;
        return;
    }
    for(int i=0; i<=n; i++) {
        if(ship[i] <= a) A = i;
        else break;
    }
    for(int j=n; j>=0; j--) {
        if(ship[j] >= b) B = j;
        else break;
    }
    //cout << "AB " << A << ' ' << B << endl;
    if(A >= B) cout << n << endl;
    else cout << n - B + A << endl;
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

