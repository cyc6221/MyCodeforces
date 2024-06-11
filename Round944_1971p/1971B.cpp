#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	string s;
	cin >> s;
	int check = 0;
	for(int i=0; i+1<s.length(); i++) {
		if(s[i] != s[i+1]) {
			swap(s[i], s[i+1]);
			cout << "YES\n";
			cout << s << endl;
			return;
		}
	}
	cout << "NO\n";
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

