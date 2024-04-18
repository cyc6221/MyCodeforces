#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n;
	string s, a, b;
	cin >> n >> s;
	ll res = n-1, count = 0;
	
	for(int i=0; i+2<n; i++) {
		if(s[i] == s[i+2]) {
			res--;
		}
	}
	/*
	for(int i=0; i+1<n; ) {
		a = s[i], b = s[i+1];
		count = 0;
		for(int j=i; j<n; j+=2) {
			if(s[i] == s[j]) count++;
			else break;
			if(j+1 < n && s[i+1] == s[j+1]) count++;
			else break;
		}
		if(count > 2) {
			res -= (count-2);
			i += count;
			if(count % 2 == 1) i--;
		}
		else {
			i++;
		}
	}*/
	cout << res << endl;
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

