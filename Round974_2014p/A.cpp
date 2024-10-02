#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
    int n, k, res=0, r=0;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(a[i] >= k) {
            r += a[i];
        }
        else if(a[i] == 0) {
            if(r > 0) {
                res++;
                r--;
            }
        }
    }
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