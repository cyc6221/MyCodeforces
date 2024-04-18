#include <bits/stdc++.h>
using namespace std;

bool sol() {
	string ans;
	for(int i=0; i<100; i++) ans += "Yes";
	string s;
	cin >> s;
	return ans.find(s) != string::npos;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		//cout << "Case #" << i << ": ";
		sol() ? cout << "Yes\n" : cout << "No\n";
	}
	return 0;
}
