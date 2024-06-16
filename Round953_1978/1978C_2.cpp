#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
    ll n, k;
    cin >> n >> k;

    if(k % 2 == 1) {
        cout << "NO\n";
        return;
    }

    vector<ll> arr(n+1);
    for(int i=1; i<=n; i++) {
        arr[i] = i;
    }

    for(int i=1; i<=n/2 && k > 0; i++) {
        for(int j=n+1-i; j>=i+1; j--) {
            if((j-i) * 2 > k) continue;

            swap(arr[i], arr[j]);
            k -= (j-i) * 2;
            break;
        }
    }
    if(k > 0) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
        for(int i=1; i<=n; i++) {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }
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

