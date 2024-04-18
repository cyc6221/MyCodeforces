#include <bits/stdc++.h>
using namespace std;

void sol() {
	int n, temp;
	cin >> n;
	vector<int> vt;
	for(int i=0; i<n; i++) {
		cin >> temp;
		if(vt.empty() || temp != vt.back()) vt.push_back(temp);
	}
	
	if(n == 1 || n == 2) {
		cout << "Yes\n";
		return;
	}
	
	/*
	for(int i=0; i<vt.size(); i++) {
		cout << vt[i] << ' ';
	}
	cout << endl;
	*/
	
	int val = 0, sz = vt.size();
	if(sz == 1 || sz == 2) {
		cout << "Yes\n";
		return;
	}
	
	if(vt[0] < vt[1]) val++;
	if(vt[sz-2] > vt[sz-1]) val++;
	for(int i=1; i+1<sz; i++) {
		if(vt[i-1] > vt[i] && vt[i] < vt[i+1]) val++;
	}
	if(val == 1) cout << "Yes\n";
	else cout << "No\n";
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

