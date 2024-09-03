#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
    int l, r;
    cin >> l >> r;

    int d = 1, cur = l;
    int len = 1;
    while(cur + d <= r) {
        cur += d;
        len++;
        d++;
    }
    cout << len << endl;
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

