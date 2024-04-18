#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int a, b, limit;
	cin >> a >> b;
	limit = max(a, b);
	
	vector<int> vt(limit+1, 0);
	for(int i=0; i<=limit; i++) {
		vt[i] = i;
	}
	for(int len = 2, cost; len <= limit; len++) {
		for(int i=0; i<len; i++) {
			cost = len + i;
			for(int j=i+len; j<=limit; j+=len) {
				vt[j] = min(vt[j], cost);
				cost++;
			}
		}
	}
	
	vector<vector<int>> g(limit+1, vector<int>(limit+1, 0));
	for(int i=0; i<=limit; i++) {
		g[i][0] = vt[i];
		for(int j=0; j<=limit; j++) {
			g[i][j] = min(g[i][j], g[i][0] + vt[j]);
		}
	}
	
	cout << g[a][b] << endl;
	
	//for(auto& i : vt) cout << i << ' ';
	//cout << endl;
	//cout << vt[a] + vt[b] << endl;
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

