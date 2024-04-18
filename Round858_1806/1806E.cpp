#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, Q;
	cin >> n >> Q;
	vector<ll> a(n+1, 0), p(n+1, 0);//, sum(n+1, 0);
	vector<vector<ll>> sum(n+1, vector<ll>(n+1, 0));
	vector<vector<int>> son(n+1, vector<int>{});
	for(int i=1; i<=n; i++) {
		cin >> a[i];
		//sum[i] = a[i] * a[i];
	}
	for(int i=2; i<=n; i++) {
		cin >> p[i];
		son[p[i]].push_back(i);
	}
	sum[1][1] = a[1] * a[1];
	queue<int> q;
	q.push(1);
	while(!q.empty()) {
		int r = q.front();
		q.pop();
		
		for(auto& sn1 : son[r]) {
			for(auto& sn2 : son[r]) {
				sum[sn1][sn2] = a[sn1] * a[sn2] + sum[r][r];
			}
			if(son[sn1].size() > 0) q.push(sn1);
		}
		/*
		for(auto& sn : son[r]) {
			sum[sn] += sum[r];
			if(son[sn].size() > 0) q.push(sn);
		}*/
	}
	
	while(Q--) {
		ll x, y, res = 0;
		cin >> x >> y;
		cout << sum[x][y] << endl;
		/*
		while(x != 0 && y != 0) {
			if(x == y) {
				res += sum[x];
				break;
			}
			//cout << x << ' ' << y << endl;
			res += a[x] * a[y];
			x = p[x];
			y = p[y];
		}
		cout << res << endl;*/
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

