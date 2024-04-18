#include <bits/stdc++.h>
using namespace std;

bool sol() {
	int n;
	cin >> n;
	vector<int> vt(n);
	for(int i=0; i<n; i++) cin >> vt[i];
	
	return vt[0] == 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		//cout << "Case #" << i << ": ";
		sol() ? cout << "YES" : cout << "NO";
		cout << endl;
	}
	return 0;
}
