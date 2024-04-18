#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int k;
	string s, t;
	cin >> k >> t;
	for(int i=1; i<=100; i++) {
		if(i % 3 == 0 && i % 5 == 0) s += "FB";
		else if(i % 3 == 0) s += "F";
		else if(i % 5 == 0) s += "B";
	}
	
	if(s.find(t) != string::npos) cout << "Yes\n";
	else cout << "No\n";
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

