#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, k;
	string s, t;
	cin >> n >> k >> s >> t;
	vector<int> a(26, 0), b(26, 0);
	
	//if(n == 1 || n == 2 || n == 3) {
	if(n <= k) {
		if(s == t) cout << "YES\n";
		else cout << "NO\n";
		return;
	}
	
	if(n < 2*k) {
		set<int> check;
		int diff = 2*k - n, p=k-1;
		for(int x=0; x<diff; x++) {
			if(s[p-x] != t[p-x]) {
				cout << "NO\n";
				return;
			}
			check.insert(p-x);
		}
		for(int i=0; i<n; i++) {
			if(check.count(i)) continue;
			a[s[i]-'a']++;
			b[t[i]-'a']++;
		}
		for(int i=0; i<26; i++) {
			if(a[i] != b[i]) {
				cout << "NO\n";
				return;
			}
		}
		cout << "YES\n";
		return;
	}

	
	for(int i=0; i<n; i++) {
		a[s[i]-'a']++;
		b[t[i]-'a']++;
	}
	for(int i=0; i<26; i++) {
		if(a[i] != b[i]) {
			cout << "NO\n";
			return;
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

