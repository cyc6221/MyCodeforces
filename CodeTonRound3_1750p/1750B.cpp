#include <bits/stdc++.h>
using namespace std;

void sol() {
	int n;
	string s, temp;
	cin >> n >> s;
	
	long long x = 0, y = 0, len, mx = 0;
	for(int i=0; i<s.length(); i++) {
		if(s[i] == '0') {
			len = 1;
			for(int j=i+1; j<s.length(); i++, j++) {
				if(s[i] == s[j]) len++;
				else {break;}
			}
			x += len;
			mx = max(mx, len * len);
		}
		else if(s[i] == '1') {
			len = 1;
			for(int j=i+1; j<s.length(); i++, j++) {
				if(s[i] == s[j]) len++;
				else {break;}
			}
			y += len;
			mx = max(mx, len * len);
		}
	}
	mx = max(mx, x * y);
	cout << mx << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		//cout << "Case #" << i << ": ";
		sol();
	}
	return 0;
}
