#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	if(a < b && a < c && b < d && c < d) cout << "YES\n";
	else if(b < a && b < d && a < c && d < c) cout << "YES\n";
	else if(c < a && c < d && a < b && d < b) cout << "YES\n";
	else if(d < b && d < c && b < a && c < a) cout << "YES\n";
	else cout << "NO\n";
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

