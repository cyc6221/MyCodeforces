#include <bits/stdc++.h>
using namespace std;

void sol() {
	vector<int> vt(3);
	cin >> vt[0] >> vt[1] >> vt[2];
	sort(vt.begin(), vt.end());
	cout << vt[1] << endl;
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

