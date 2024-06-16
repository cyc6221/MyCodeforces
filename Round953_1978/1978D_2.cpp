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

    vector<ll> presum(n);
    ll temp = 0;
    ll themax = a[0]+c, themaxpos = 0;
    for(int i=0; i<n; i++) {
        presum[i] = temp;
        temp += a[i];
        
        if(a[i] > themax) {
            themax = a[i];
            themaxpos = i;
        }
    }

    vector<ll> X = a;
    sort(X.begin(), X.end());

    ll cnt = 0, xxx = n-1;
    set<ll> visit;
    while(cnt < n) {
        
        ll mx = X[xxx];
        while(mx == X[xxx] && xxx>=0) xxx--;
        /*
        for(int i=0; i<n; i++) {
            if(!visit.count(a[i])) {
                mx = max(mx, a[i]);
            }
        }
        visit.insert(mx);
        */

        for(int i=0; i<n; i++) {
            if(a[i] == mx) {
                cnt++;
                if(mx == themax && i == themaxpos) {
                    res[i] = 0;
                }
                else if(i < themaxpos) {
                    if(presum[i] + c + a[i] >= themax) res[i] = i;
                    else res[i] = i+1;
                }
                else { // themaxpos < i
                    res[i] = i;
                }
            }
        }
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

