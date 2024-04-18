#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int V, E;
	cin >> V >> E;
	unordered_map <int, vector<int>> e;
	
	for(int i=0, a, b; i<E; i++) {
		cin >> a >> b;
		e[a].push_back(b);
		e[b].push_back(a);
	}
	
	unordered_map <int, int> sz;
	for(auto& i : e) {
		if(i.second.size() != 1) {
			sz[i.second.size()]++;
		}
	}
	if(sz.size() == 1) {
		//cout << "res1  ";
		int res;
		for(auto& x : sz) res = x.first;
		cout << res << ' ' << res-1 << endl;
	}
	else {
		//cout << "res2  ";
		int res[2], cnt[2];
		int i=0;
		for(auto& x : sz) {
			res[i] = x.first;
			cnt[i] = x.second;
			i++;
		}
		if(cnt[0] == 1) {
			cout << res[0] << ' ' << res[1]-1 << endl;
		}
		else {
			cout << res[1] << ' ' << res[0]-1 << endl;
		}
	}
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
