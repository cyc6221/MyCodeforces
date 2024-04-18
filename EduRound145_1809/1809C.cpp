#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, k, x, s;
	cin >> n >> k;

	if(k == 0) {
		while(n--) cout << -1000 << ' ';
		cout << endl;
		return;
	}
	
	vector<int> res(n, 0), sum(n, 0);
	
	s=1;
	x=n;
	for(int i=0; i<n; i++) {
		if(s > k) {
			int index = k;
			res[i] = -sum[index] - 1;
			for(int k=i+1; k<n; k++) res[k] = -1000;
			break;
		}
		else {
			res[i] = x;
			for(int j=0; j<=i; j++) {
				sum[j] += x;
			}
			x--;
		}
		k -= s;
		s++;
	}
	for(auto& i : res) cout << i << ' ';
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

