#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, m, k, H;
	cin >> n >> m >> k >> H;
	int res = 0;
	for(int i=0; i<n; i++) {
		int temp; cin >> temp;
		if(temp == H) continue;
		
		int diff = abs(temp - H);
		if(diff % k == 0 && diff / k < m) res++;
	}
	cout << res << endl;
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

