#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int k, n;
	cin >> k >> n;
	vector<int> vt(k, 0);
	
	int add = n - k, j = 0;
	
	vt[0] = 1;
	for(int i=1; i<k; i++) {
		vt[i] = vt[i-1] + 1;
		if(add > 0) {
			int temp = min(add, j);
			vt[i] += temp;
			add -= temp;
			j++;
		}
	}
	
	for(auto& x : vt) {
		cout << x << ' ';
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

