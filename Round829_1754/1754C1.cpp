#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin >> test;
	while(test--) {
		int n, sum=0;
		cin >> n;
		vector<int> vt(n);
		for(int i=0, neg=1; i<n; i++, neg*=-1) {
			cin >> vt[i];
			//sum += vt[i] * neg;
		}
		
		/*
		if(sum % 2 == 1) {
			cout << "-1\n";
			continue;
		}
		else if(sum == 0) {
			cout << "1\n" << "1 " << n << '\n';
			continue;
		}
		*/
		
		vector<vector<int>> par;
		int count = 0;
		
		for(int i=0; i<n; i++) {
			if(i+1 < n && vt[i] == vt[i+1]) {
				par.push_back({i+1, i+2});
				i++;
			}
			else {
				par.push_back({i+1, i+1});
				count += vt[i];
			}
		}
		
		if(count != 0) cout << "-1\n";
		else if(!par.empty() && par.back()[1] == n) {
			cout << par.size() << '\n';
			for(auto i : par) {
				cout << i[0] << ' ' << i[1] << '\n';
			}
		}
		else cout << "-1\n";
	}
	return 0;
}

