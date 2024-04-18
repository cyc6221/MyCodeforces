#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n;
	cin >> n;
	vector<double> vt(n), temp;
	for(int i=0; i<n; i++) {
		cin >> vt[i];
	}
	
	if(n == 1) {
		cout << "0\n";
		return;
	}
	
	vector<vector<int>> res;
	for(int i=0; i<=30*n; i++) {
		temp = vt;
		sort(temp.rbegin(), temp.rend());
		
		double mx = temp[0], mx2 = -1;
		for(int k=1; k<n; k++) {
			if(temp[k] != mx) {
				mx2 = temp[k];
				break;
			}
		}
		if(mx2 == -1) break;
		
		int x, y;
		for(int j=0; j<n; j++) {
			if(vt[j] == mx) x = j;
			if(vt[j] == mx2) y = j;
		}
		
		res.push_back({x, y});
		double temp = vt[x] / vt[y];
		vt[x] = ceil(temp);
	}
	
	if(res.size() == 0) {
		cout << "0\n";
		return;
	}
	if(res.size() > 30 * n) {
		cout << "-1\n";
		return;
	}
	
	cout << res.size() << endl;
	for(auto& i : res) {
		cout << i[0]+1 << ' ' << i[1]+1 << endl;
	}
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

