#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	string s;
	cin >> s;
	ll mx = 0, len = s.length();
	for(ll i=0; i<len; i++) {
		if(s[i] == '1') {
			ll x = i, y = i;
			while(s[(y+1) % len] == '1') {
				if((y+1) % len == x) break;
				y++;
				y %= len;
			}
			
			if(y >= x) mx = max(mx, y-x+1);
			else mx = max(mx, len-x+y+1);
			
			if(y > x) i = y;
		}
	}
	//cout << "mx " << mx << endl;
	if(mx == 0) cout << "0\n";
	else if(mx == 1) cout << "1\n";
	else if(mx == len) cout << len * len << endl;
	else {
		ll a = 1, b = mx, res = 0;
		while(b >= mx/2) {
			res = max(res, a * b);
			a++, b--;
		}
		cout << res << endl;
	}
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

