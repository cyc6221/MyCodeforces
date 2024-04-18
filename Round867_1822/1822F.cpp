#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

vector<vector<int>> e;
vector<ll> H, C;
vector<int> vis;
ll res, n, k, c;

ll h(int i, int step) {
	if(vis[i]) return -1;
	vis[i] = 1;
	C[i] = step;
	ll mx = 0;
	for(auto& j : e[i]) {
		mx = max(mx, 1+h(j, step+1));
	}
	return mx;
}
/*
void dfs(int i, ll step, ll cur) {
	if(vis[i]) return;
	vis[i] = 1;
	res = max(res, cur);
	
	for(auto& j : e[i]) {
		//ll H = h(j);
		//cout << "j " << j << " H " << H << endl;
		//if(H[j] * k - c * step >= cur) {
			dfs(j, step+1, H[j] * k - c * step);
		//}
	}
}
*/
void sol() {
	//ll n, k, c;
	cin >> n >> k >> c;
	e.assign(n+1, vector<int>{});
	for(int i=0, a, b; i<n-1; i++) {
		cin >> a >> b;
		e[a].push_back(b);
		e[b].push_back(a);
	}

	H.assign(n+1, 0);
	C.assign(n+1, 0);
	for(int i=2; i<=n; i++) {
		vis.assign(n+1, 0);
		//ll H = h(i);
		H[i] = h(i, 0);
		//cout << i << " i am h " << H[i] << endl;
	}
	vis.assign(n+1, 0);
	H[1] = h(1, 0);
	res = 0;
	for(int i=1; i<=n; i++) {
		//cout << i << " i am h " << H[i] << endl;
		//cout << i << " i am c " << C[i] << endl;
		res = max(res, H[i] * k - C[i] * c);
	}
	cout << res << endl;
	
	/*
	res = H[1] * k;
	vis.assign(n+1, 0);
	dfs(1, 1, res);
	cout << res << endl;*/
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
