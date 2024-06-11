#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, m;
	int X=0, Y=0, cnt=0;
	cin >> n >> m;
	//vector<vector<char>> g(n+1, vector(m+1, '$'));
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			//cin >> g[i][j];
			char c;
			cin >> c;
			
			//if(g[i][j] == '#') {
			if(c == '#') {
				X += i;
				Y += j;
				cnt++;
			}
		}
	}
	cout << X / cnt << ' ' << Y / cnt << endl;
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

