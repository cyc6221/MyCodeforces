#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin >> test;
	while(test--) {
		int n, q=0, check=1;
		string s;
		cin >> n >> s;
		for(int i=0; i<n && check; i++) {
			if(s[i] == 'Q') q++;
			else if(s[i] == 'A') q--;
			if(q < 0) q = 0;
		}
		if(q == 0) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

