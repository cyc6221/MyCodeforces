#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	string s;
	cin >> s;
	int res = 0;
	
	if(s[0] != 'c') res++;
	if(s[1] != 'o') res++;
	if(s[2] != 'd') res++;
	if(s[3] != 'e') res++;
	if(s[4] != 'f') res++;
	if(s[5] != 'o') res++;
	if(s[6] != 'r') res++;
	if(s[7] != 'c') res++;
	if(s[8] != 'e') res++;
	if(s[9] != 's') res++;
	
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

