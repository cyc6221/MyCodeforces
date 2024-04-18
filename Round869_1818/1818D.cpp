#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

vector<int> G;
vector<int> vis;
vector<vector<int>> e;
vector<vector<int>> fish;

void dfs(int i, int parent) {
	if(vis[i]) {
		//cycle
		//cout << "im cycle " << i << endl;
		vector<int> temp = {i};
		for(int sz=G.size()-1; sz>=0; sz--) {
			//cout << G[sz] << ' ';
			temp.push_back(G[sz]);
			if(G[sz] == i) break;
		} //cout << endl;
		fish.push_back(temp);
		return;
	}
	vis[i] = 1;
	G.push_back(i);
	for(auto& j : e[i]) {
		if(j == parent) continue;
		dfs(j, i);
	}
	G.pop_back();
}

vector<vector<int>> check_fish(int f) {
	cout << "Im f " << f << endl;
	vector<vector<int>> res;
	set <int> s;
	for(auto& i : fish[f]) {
		s.insert(i);
	}
	int check = 0;
	for(auto& i : fish[f]) {
		int tail1 = 0, tail2 = 0;
		for(auto& j : e[i]) {
			if(s.count(j)) {
				if(i > j) continue;
				else res.push_back({i, j});
			}
			if(!s.count(j)) {
				if(tail1 == 0) tail1 = j;
				else if(tail2 == 0) tail2 = j;
			}
		}
		if(check == 0 && tail1 != 0 && tail2 != 0) {
			res.push_back({i, tail1});
			res.push_back({i, tail2});
			check = 1;
		}
	}
	if(check) {
		return res;
	}
	else return {};
}

void sol() {
	int n, m;
	cin >> n >> m;
	
	e.assign(n+1, vector<int>{});
	for(int i=0, e1, e2; i<m; i++) {
		cin >> e1 >> e2;
		e[e1].push_back(e2);
		e[e2].push_back(e1);
	}
	
	vis.assign(n+1, 0);
	for(int i=1; i<=n; i++) {
		if(vis[i]) continue;
		dfs(i, 0);
	}
	sort(G.rbegin(), G.rend());
	vector<vector<int>> res = {}, temp;
	for(int f=0; f<fish.size(); f++) {
		temp = check_fish(f);
		if(temp.size() > res.size()) {
			res = temp;
		}
	}
	
	if(res.size() == 0) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	cout << res.size() << endl;
	for(auto& i : res) {
		cout << i[0] << ' ' << i[1] << endl;
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

