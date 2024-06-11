#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	string s;
	cin >> s;
	int A = 0, B = 0;
	for(int i=0; i+1<s.length(); i++) {
		if(s[i] == '0' && s[i+1] == '1') {
			A++;
		}
		if(s[i] == '1' && s[i+1] == '0') {
			B++;
		}
	}
	//cout << "A " << A << " B " << B << endl;
	if(A <= 1) cout << B + 1 << endl;
	else cout << A + B << endl;
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

