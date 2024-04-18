#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, m, d;
	cin >> n >> m;
	
	vector<vector<int>> g(n+1, vector<int>(m+1, 0));
	
	//////	case 1	//////
	int x = 1, y = 1;
	cout << "? " << x << " " << y << endl;
	fflush(stdout);
	cin >> d;
	if(d == 0) {
		cout << "! " << x << " " << y << endl;
		fflush(stdout);
		return;
	}
	for(int j=max(y-d+1, 1); j<=y+d-1; j++) {
		//if(j < 1) continue;
		if(j > m) break;
		if(x-d > 0) g[x-d][j]++;
		if(x+d <= n) g[x+d][j]++;
	}
	for(int i=max(x-d+1, 1); i<=x+d-1; i++) {
		//if(i < 1) continue;
		if(i > n) break;
		if(y-d > 0) g[i][y-d]++;
		if(y+d <= m) g[i][y+d]++;
	}
	if(x-d > 0 && x-d <= n && y-d > 0 && y-d <= m) g[x-d][y-d]++;
	if(x-d > 0 && x-d <= n && y+d > 0 && y+d <= m) g[x-d][y+d]++;
	if(x+d > 0 && x+d <= n && y-d > 0 && y-d <= m) g[x+d][y-d]++;
	if(x+d > 0 && x+d <= n && y+d > 0 && y+d <= m) g[x+d][y+d]++;
	
	priority_queue<vector<int>> pq;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			if(pq.empty() || g[i][j] >= pq.top()[0]) pq.push({g[i][j], i, j});
		}
	}
	auto A = pq.top();
	x = A[1], y = A[2];

	//////	case 2	//////
	//x = 1, y = 1;
	cout << "? " << x << " " << y << endl;
	fflush(stdout);
	cin >> d;
	if(d == 0) {
		cout << "! " << x << " " << y << endl;
		fflush(stdout);
		return;
	}
	for(int j=max(y-d+1, 1); j<=y+d-1; j++) {
		//if(j < 1) continue;
		if(j > m) break;
		if(x-d > 0) g[x-d][j]++;
		if(x+d <= n) g[x+d][j]++;
	}
	for(int i=max(x-d+1, 1); i<=x+d-1; i++) {
		//if(i < 1) continue;
		if(i > n) break;
		if(y-d > 0) g[i][y-d]++;
		if(y+d <= m) g[i][y+d]++;
	}
	if(x-d > 0 && x-d <= n && y-d > 0 && y-d <= m) g[x-d][y-d]++;
	if(x-d > 0 && x-d <= n && y+d > 0 && y+d <= m) g[x-d][y+d]++;
	if(x+d > 0 && x+d <= n && y-d > 0 && y-d <= m) g[x+d][y-d]++;
	if(x+d > 0 && x+d <= n && y+d > 0 && y+d <= m) g[x+d][y+d]++;
	
	/*priority_queue<vector<int>> pq2;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			pq2.push({g[i][j], i, j});
		}
	}
	auto B = pq2.top();
	x = B[1], y = B[2];*/
	
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			if(pq.empty() || g[i][j] >= pq.top()[0]) pq.push({g[i][j], i, j});
		}
	}
	A = pq.top();
	x = A[1], y = A[2];
	//while(!pq.empty()) pq.pop();
	
	//////	case 3	//////
	//x = n, y = m;
	cout << "? " << x << " " << y << endl;
	fflush(stdout);
	cin >> d;
	if(d == 0) {
		cout << "! " << x << " " << y << endl;
		fflush(stdout);
		return;
	}
	for(int j=max(y-d+1, 1); j<=y+d-1; j++) {
		//if(j < 1) continue;
		if(j > m) break;
		if(x-d > 0) g[x-d][j]++;
		if(x+d <= n) g[x+d][j]++;
	}
	for(int i=max(x-d+1, 1); i<=x+d-1; i++) {
		//if(i < 1) continue;
		if(i > n) break;
		if(y-d > 0) g[i][y-d]++;
		if(y+d <= m) g[i][y+d]++;
	}
	if(x-d > 0 && x-d <= n && y-d > 0 && y-d <= m) g[x-d][y-d]++;
	if(x-d > 0 && x-d <= n && y+d > 0 && y+d <= m) g[x-d][y+d]++;
	if(x+d > 0 && x+d <= n && y-d > 0 && y-d <= m) g[x+d][y-d]++;
	if(x+d > 0 && x+d <= n && y+d > 0 && y+d <= m) g[x+d][y+d]++;
	
	/*priority_queue<vector<int>> pq3;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			pq3.push({g[i][j], i, j});
			//cout << g[i][j] << ' ';
		}
		//cout << endl;
	}*/
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			if(pq.empty() || g[i][j] >= pq.top()[0]) pq.push({g[i][j], i, j});
		}
	}
	auto top = pq.top();
	cout << "! " << top[1] << " " << top[2] << endl;
	fflush(stdout);
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

