#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
    int n, res =0;
    cin >> n;
    while(n>1) {
        int i;
        cin >> i;
        res = max(res, i);
        n--;
    }
    int x;
    cin >> x;
    cout << res + x << endl;
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

