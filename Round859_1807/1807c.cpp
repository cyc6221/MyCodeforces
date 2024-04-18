#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n;
	string s;
	cin >> n >> s;
	
	vector<int> a(26, -1);
	for(int i=0; i<n; i++) {
		if(a[s[i]-'a'] == -1) a[s[i]-'a'] = i % 2;
		else {
			if(a[s[i]-'a'] != i % 2) {
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
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

