#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;
using db = double;

void sol() {
	ll n, diff = 0, temp;
	cin >> n;
	vector<db> vt(n);
	for(int i=0; i<n; i++) {
		cin >> vt[i];
		if(i > 0 && vt[i-1] > vt[i]) {
			temp = ceil((vt[i-1]+vt[i]) / 2);
			diff = max(diff, temp);
		}
	}

	for(int i=0; i<n; i++) {
		vt[i] = abs(vt[i] - diff);
	}
	
	int ok = 1;
	for(int i=1; i<n && ok; i++) {
		if(vt[i-1] > vt[i]) ok = 0;
	}
	
	if(ok) cout << diff << endl;
	else cout << "-1\n";
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

