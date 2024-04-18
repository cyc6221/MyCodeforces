#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, k, x;
	cin >> n >> k >> x;
	vector<int> vt(n+1);
	for(int i=1; i<=n; i++) {
		cin >> vt[i];
	}
	
	int dp[n+1][n+1][n+1] = {0};
	for(int i=1, j; i<=n; i++) {
		for(j=i; j>=0; j--) {
			dp[i][j][i-j] = vt[i];
			//dp[i][i-j][i] = vt[i];
		}
		dp[i][i][0] = dp[i][i][0] + x + dp[i-1][i-1][0];
		dp[i][0][i] = dp[i][0][i] - x + dp[i-1][0][i-1];
		for(j=i-1; j>0; j--) {
			//dp[i][j][i-j] += max(dp[i][j][i-j], dp[i-1][j-1][i-j] + x);
			dp[i][j][i-j] += dp[i-1][j-1][i-j] + x;
		}
		for(j=i-1; j>0; j--) {
			dp[i][i-j][j] = max(dp[i][i-j][j], vt[i] + dp[i-1][i-j][j-1] - x);
		}
	}
	
	for(int i=1; i<=n; i++) {
		for(int j=i; j>=0; j--) {
			cout << dp[i][j][i-j] << ' ';
		}
		cout << endl;
	}
	
	cout << dp[n][k][n-k] << endl;
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

