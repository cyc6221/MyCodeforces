#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n;
	string s;
	cin >> n >> s;
	int x = 0;
	for(int i=0; i<n; i++) {
		if(s[i] == 'm' || s[i] == 'M') {
			if(x == 0) x = 1;
			else if(x == 1);
			else {
				cout << "NO\n";
				return;
			}
		}
		else if(s[i] == 'e' || s[i] == 'E') {
			if(x == 1) x = 2;
			else if(x == 2);
			else {
				cout << "NO\n";
				return;
			}
		}
		else if(s[i] == 'o' || s[i] == 'O') {
			if(x == 2) x = 3;
			else if(x == 3);
			else {
				cout << "NO\n";
				return;
			}
		}
		else if(s[i] == 'w' || s[i] == 'W') {
			if(x == 3) x = 4;
			else if(x == 4);
			else {
				cout << "NO\n";
				return;
			}
		}
		else {
			cout << "NO\n";
			return;
		}
	}
	if(x == 4) cout << "YES\n";
	else cout << "No\n";
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

