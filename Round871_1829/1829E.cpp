#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

int n, m, temp;
vector<vector<int>> g, vis;

void dfs(int i, int j) {
	if(vis[i][j]) return;
	vis[i][j] = 1;
	temp += g[i][j];
	
	if(i+1 < n && !vis[i+1][j]) dfs(i+1, j);
	if(i-1 >= 0&& !vis[i-1][j]) dfs(i-1, j);
	if(j+1 < m && !vis[i][j+1]) dfs(i, j+1);
	if(j-1 >= 0&& !vis[i][j-1]) dfs(i, j-1);
}

void sol() {
	cin >> n >> m;
	g.assign(n, vector<int>(m, 0));
	vis.assign(n, vector<int>(m, 0));
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> g[i][j];
			if(g[i][j] == 0) vis[i][j] = 1;
		}
	}
	int res = 0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(!vis[i][j]) {
				temp = 0;
				dfs(i, j);
				res = max(res, temp);
			}
		}
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
