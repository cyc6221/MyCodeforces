#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
    int a, b;
    cin >> a >> b;
    /*
    if(a == 0 && b == 0) {
        cout << "YES\n";
        return;
    }
    
    if(a == 0 && b > 0) {
        if(b % 2 == 1) cout << "NO\n";
        else cout << "YES\n";
        return;
    }
    if(a > 0 && b == 0) {
        if(a % 2 == 1) cout << "NO\n";
        else cout << "YES\n";
        return;
    }
    */

    // a>0 && b>0
    if(a % 2 == 1) {
        cout << "NO\n";
        return;
    }

    // a % 2 == 0
    if(b % 2 == 0) {
        cout << "YES\n";
        return;
    }

    if(a > 0) cout << "YES\n";
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

