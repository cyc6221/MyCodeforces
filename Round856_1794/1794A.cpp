#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n;
	cin >> n;
	
	int check = 0;
	string a, b, s;
	for(int i=0; i<2*n-2; i++) {
		cin >> s;
		
		if(s.length() == n-1) {
			if(check == 0) {
				a = s;
				check = 1;
			}
			else b = s;
		}
	}
	reverse(b.begin(), b.end());
	if(a == b) cout << "YES\n";
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

