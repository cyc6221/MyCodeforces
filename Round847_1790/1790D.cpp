#include <bits/stdc++.h>
using namespace std;

void sol() {
	int n;
	cin >> n;
	vector<int> vt(n, 0);
	for(int i=0; i<n; i++) {
		cin >> vt[i];
	}
	sort(vt.begin(), vt.end());
	int cur = 1, pre = 0, res = 0;
	for(int i=0; i<n; i++) {
		while(i+1<n && vt[i+1] == vt[i]) {
			i++;
			cur++;
		}
		
		if(cur > pre) {
			res += cur - pre;
		}
		if(i+1<n && vt[i+1]-vt[i] == 1) pre = cur;
		else pre = 0;
		cur = 1;
	}
	cout << res << endl;
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

