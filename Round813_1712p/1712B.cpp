#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
	return a * b / __gcd(a, b);
}

void sol(int n) {
	vector<int> vt, res;
	for(int i=1; i<=n; i++) vt.push_back(i);
	
	int mx = 0;
	do {
		int temp = 0;
		for(int i=1; i<=n; i++) {
			temp += lcm(i, vt[i-1]);
		}
		if(temp > mx) {
			mx = temp;
			res = vt;
		}
	} while(next_permutation(vt.begin(), vt.end()));
	
	for(auto i : res) cout << i << ' ';
	cout << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		sol(n);
	}
	return 0;
}
