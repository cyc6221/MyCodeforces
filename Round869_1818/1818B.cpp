#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n;
	cin >> n;
	
	if(n == 1) {
		cout << "1\n";
		return;
	}
	if(n % 2 == 1) {
		cout << "-1\n";
		return;
	}
	
	while(n > 0) {
		cout << n-1 << ' ' << n << ' ';
		n -= 2;
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

