#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a > b) {
        if(c > d) cout << "YES\n";
        else cout << "NO\n";
    }
    else if(a < b){
        if(c < d) cout << "YES\n";
        else cout << "NO\n";
    }
    else {
        cout << "YES\n";
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

