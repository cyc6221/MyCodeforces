#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, k, cnt=0;
	cin >> n >> k;
	vector<int> a(n);
	vector<vector<int>> mod(k, vector<int>{});
	for(int i=0; i<n; i++) {
		cin >> a[i];
		mod[(i+1)%k].push_back(a[i]);
	}
	for(int i=0; i<k; i++) {
		//sort(mod[i].begin(), mod[i].end());
		//int j = (i == 0) ? k : i;
		int j = i;
		//cout << "iii " << i << endl;
		for(auto& x : mod[i]) {
			//cout << x << ' ';
			if(x % k != j) cnt++;
			//j += k;
		}
		//cout << endl;
	}
	//cout << "cnt " << cnt << endl;
	
	if(cnt == 0) cout << "0\n";
	else if(cnt == 2) cout << "1\n";
	else cout << "-1\n";
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

