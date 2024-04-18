#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll a, b;
	cin >> a >> b;
	
	if(a == 1) {
		cout << 1 << endl;
		cout << a << ' ' << b << endl;
	}
	else if(b == 1) {
		cout << 1 << endl;
		cout << a << ' ' << b << endl;
	}
	else if(a == 2 && b == 2){
		cout << 2 << endl;
		cout << "1 0\n";
		cout << "2 2\n";
	}
	else {
		cout << 2 << endl;
		cout << a-1 << " 1\n";
		cout << a << ' ' << b << endl;
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

