#include <bits/stdc++.h>
using namespace std;

void sol() {
	int n;
	cin >> n;
	vector<int> vt(n);
	for(int i=1; i<=n; i++) vt[i-1] = i;
	if(n % 2 == 0) reverse(vt.begin(), vt.begin()+n-2);
	else reverse(vt.begin()+1, vt.begin()+n-2);
	for(auto& i : vt) cout << i << ' ';
	cout << endl;
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

