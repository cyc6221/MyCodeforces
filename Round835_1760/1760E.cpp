#include <bits/stdc++.h>
using namespace std;

void sol() {
	long long n;
	cin >> n;
	vector<long long> vt(n), pre(n), post(n);
	for(int i=0; i<n; i++) {
		cin >> vt[i];
	}
	
	long long temp = 0;
	for(int i=0; i<n; i++) {
		pre[i] = temp;
		if(vt[i] == 1) temp++;
	}
	temp = 0;
	for(int i=n-1; i>=0; i--) {
		post[i] = temp;
		if(vt[i] == 0) temp++;
	}
	
	long long zero = 0, count = 0;
	for(int i=n-1; i>=0; i--) {
		if(vt[i] == 0) zero++;
		else count += zero;
	}
	
	long long diff = 0;
	for(int i=0; i<n; i++) {
		if(vt[i] == 0) {
			diff = max(diff, post[i] - pre[i]);
		}
		else {
			diff = max(diff, pre[i] - post[i]);
		}
	}
	cout << count + diff << endl;
}

//	0->1	- pre 1 + post 0
//  1->0    + pre 1 - post 0

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
