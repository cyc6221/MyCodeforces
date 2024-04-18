#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int res = 0;
	string s;
	cin >> s;
	if(s.length() == 1) {
		if(s[0] == '^') cout << "1\n";
		else if(s[0] == '_') cout << "2\n";
		return;
	}
	if(s[0] == '_') res++;
	for(int i=1; i-1<s.length(); i++) {
		if(s[i] == '_' && s[i-1] == '_') res++;
	}
	if(s.back() == '_') res++;
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

