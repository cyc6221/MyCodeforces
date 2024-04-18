#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin >> test;
	while(test--) {
		int n;
		string s;
		cin >> n >> s;
		int i=0, count = 0, ss=-1;
		while(i<n && s[i] != '1') i++;
		for(i++; i<n; i++) {
			char sign = (ss == 1) ? '1' : '0';
			if(s[i] == sign) {
				count++;
				ss *= -1;
			}
		}
		cout << count << '\n';
	}
	return 0;
}

