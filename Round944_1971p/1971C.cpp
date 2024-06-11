#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	vector<int> check;
	for(int i = (a == 12) ? 1 : a+1; i!=b; i=i+1) {
		check.push_back(i);
		if(i >= 12) i %= 12;
	}
	int valid = 0;
	for(auto& i : check) {
		if(i == c) valid++;
		if(i == d) valid++;
	}
	if(valid == 1) cout << "YES\n";
	else cout << "NO\n";
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

