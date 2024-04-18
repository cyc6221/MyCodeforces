#include <bits/stdc++.h>
using namespace std;

void sol() {
	int n;
	cin >> n;
	vector<int> vt(n), res(n);
	int mx=0, mx2=-1;
	for(int i=0; i<n; i++) {
		cin >> vt[i];
		if(vt[i] >= mx) {
			mx2 = mx;
			mx = vt[i];
		}
		else if(vt[i] > mx2) {
			mx2 = vt[i];
		}
	}
	//cout << "mx " << mx << endl;
	//cout << "mx2 " << mx2 << endl;
	
	for(int i=0; i<n; i++) {
		if(vt[i] == mx) res[i] = vt[i] - mx2;
		else res[i] = vt[i] - mx;
	}

	for(int i=0; i<n; i++) {
		cout << res[i] << ' ';
	}
	cout << endl;
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

