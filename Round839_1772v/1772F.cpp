#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

int m, n, k;
unordered_map <int, vector<int>> ump;
set<pair<int, int>> same;
set<int> samenum;
vector<vector<vector<int>>> g;

void diff(int x, int y) {
	int d = 0;
	int parent, son, posx, posy;
	for(int i=1; i<m-1; i++) {
		for(int j=1; j<n-1; j++) {
			if(d > 1) return;
			if(g[x][i][j] != g[y][i][j]) {
				if(g[x][i][j] != g[x][i][j-1]) {
					parent = x;
					son = y;
				}
				else {
					parent = y;
					son = x;
				}
				posx = i+1;
				posy = j+1;
				d++;
			}
		}
	}
	if(d == 0) {
		same.insert({x, y});
		samenum.insert(x);
		samenum.insert(y);
	}
	//else if(ump.count(parent));
	else ump[parent] = {son, posx, posy};
	
	/*
	cout << "debug\n";
	cout << "d " << d << endl;
	cout << parent << ' ' << son << endl;
	*/
}

void sol() {
	//int m, n, k;
	cin >> m >> n >> k;
	k++;
	g.assign(k+1, vector<vector<int>>(m, vector<int>(n, 0)));
	
	for(int x=1; x<=k; x++) {
		string temp;
		for(int i=0; i<m; i++) {
			cin >> temp;
			for(int j=0; j<n; j++) {
				g[x][i][j] = temp[j]-'0';
			}
		}
	}
	
	for(int i=1; i<=k; i++) {
		for(int j=i+1; j<=k; j++) {
			diff(i, j);
		}
	}
	
	/*
	cout << "ump" << endl;
	for(auto& u : ump) {
		cout << u.first;
		cout << ' ' << u.second[0];
		cout << endl;
	}
	cout << "ump" << endl;
	*/
	
	int root = 1, cur = 0;
	while(root != cur) {
		cur = root;
		for(auto& u : ump) {
			if(u.second[0] == root) {
				root = u.first;
				break;
			}
		}
	}
	
	//cout << "ROOT ";
	cout << root << endl;
	
	cur = root;
	set<int> vis;
	vector<vector<int>> q;
	while(vis.size() < k) {
		//cout << cur << 'c' << endl;
		vis.insert(cur);
		if(vis.size() == k) break;
		
		if(samenum.count(cur)) {
			for(auto& s : same) {
				if(s.first == cur) {
					q.push_back({2, s.second});
					vis.insert(s.second);
				}
				if(s.second == cur) {
					q.push_back({2, s.first});
					vis.insert(s.first);
				}
			}
		}
		if(vis.size() == k) break;
		
		auto u = ump[cur];
		q.push_back({1, u[1], u[2]});
		q.push_back({2, u[0]});
		cur = u[0];
	}
	
	//cout << "debug\n";
	
	cout << q.size() << endl;
	for(auto& qq : q) {
		for(auto& qqq : qq) {
			cout << qqq << ' ';
		}
		cout << endl;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	//int test; cin >> test;
	//for(int i=1; i<=test; i++) {
		sol();
	//}
	return 0;
}

