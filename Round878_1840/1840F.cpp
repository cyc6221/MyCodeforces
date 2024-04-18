#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

int res, n, m, r, limit;
vector<vector<set<int>>> g;
vector<vector<int>> dp;

/*
void dfs(int i, int j, int t) {
	

	if(g[i][j].count(t)) return;
	if(i == n && j == m) {
		if(res == -1) res = t;
		else res = min(res, t);
		return;
	}
	
	if(res != -1 && t >= res) return;
	if(i+1 <= n) dfs(i+1, j, t+1);
	if(j+1 <= m) dfs(i, j+1, t+1);
	if(res != -1 && t + n-i + m-j >= res) return;
	if(t <= limit) dfs(i, j, t+1);

}*/

void sol() {
	//int n, m, r;
	cin >> n >> m >> r;

	g.assign(n+1, vector<set<int>>(m+1));
	dp.assign(n+1, vector<int>(m+1, -1));
	/*
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {

		}
	}
	*/

	//limit = 0;
	while(r--) {
		int t, d, cor;
		cin >> t >> d >> cor;
		//limit = max(limit, t);
		if(d == 1) {
			//horizontal
			for(int j=0; j<=m; j++) {
				g[cor][j].insert(t);
			}
		}
		else if(d == 2) {
			//vertical
			for(int i=0; i<=n; i++) {
				g[i][cor].insert(t);
			}
		}
	}

	priority_queue <vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
	pq.push({0, 0, 0});
	while(!pq.empty()) {
		auto pos = pq.top();
		int t = pos[0], i = pos[1], j = pos[2];
		if(dp[i][j] == -1) dp[i][j] = t;
		else dp[i][j] = min(dp[i][j], t);
		
		bool hor=0, ver=0;
		if(i+1 > n) hor = 1;
		if(j+1 > m) ver = 1;
		while(!hor || !ver) {
			t++;
			if(!hor && !g[i+1][j].count(t)) {
				pq.push({t, i+1, j});
				hor = 1;
			}
			if(!ver && !g[i][j+1].count(t)) {
				pq.push({t, i, j+1});
				ver = 1;
			}
		}
	}
	cout << dp[n][m] << endl;
	
	//res = -1;
	//dfs(0, 0, 0);
	//cout << res << endl;
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
