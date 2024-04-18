#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> black, vis;
vector<vector<int>> g;

int dfs(int node, int dis) {
	//cout << node << ' ' << dis << endl;
	if(vis[node]) return INT_MAX; vis[node] = 1;
	if(black[node] == 1) {
		vis[node] = 0;
		return dis;
	}
	
	int mn = INT_MAX;
	for(auto i : g[node]) {
		int d = dfs(i, dis+1);
		mn = min(mn, d);
	}
	vis[node] = 0;
	return mn;
}

void sol() {
	int x;
	cin >> n >> x;

	black.assign(n+1, 0);
	black[x] = 1;
	
	vector<int> order(n-1, 0);
	for(int i=0; i<n-1; i++) {
		cin >> order[i];
	}
	
	g.assign(n+1, {});
	for(int i=0; i<n-1; i++) {
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	vis.assign(n+1, 0);
	//vector<int> res;
	int mndis = INT_MAX;
	for(int i=0; i<n-1; i++) {
		if(mndis == 1) {
			//res.push_back(1);
			cout << 1 << ' ';
			continue;
		}
		//vis.assign(n+1, 0);
		mndis = min(mndis, dfs(order[i], 0));
		//res.push_back(mndis);
		cout << mndis << ' ';
		black[order[i]] = 1;
	}
	//for(auto i : res) cout << i << ' ';
	cout << endl;
}

int main() {
	//ios::sync_with_stdio(0);
	//cin.tie(0);

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		sol();
	}
	return 0;
}

