#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
    int n, a, b;
    cin >> n >> a >> b;
    if(a * 2 <= b) cout << n * a << endl;
    else {
        if(n % 2 == 1) cout << a + (n/2) * b << endl;
        else cout << (n/2) * b << endl;
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

