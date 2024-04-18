#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n;
	cin >> n;
	vector<int> vt(n, 0);
	for(int i=0; i<n; i++) {
		cin >> vt[i];
	}
	
	for(int i=0; i<n; i++) {
		if(vt[i] == 1) vt[i]++;
		if(i>0 && vt[i] % vt[i-1] == 0) vt[i]++;
	}
	/*
	for(int i=0; i<n; i++) {
		if(i % 2 == 0 && vt[i] % 2 == 0) vt[i]++;
		else if(i % 2 == 1 && vt[i] % 2 == 1) vt[i]++;
		
		if(vt[i] == 1) vt[i] += 2;
		if(i > 0 && vt[i] % vt[i-1] == 0) vt[i]--;
	}*/
	
	for(auto& i : vt) {
		cout << i << ' ';
	}
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

