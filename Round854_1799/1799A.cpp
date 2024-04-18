#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, m;
	cin >> n >> m;
	vector<int> res(n+1, -1);
	
	int num, time = 1, ch = n;
	set<int> s;
	for(int i=0; i<m; i++, time++) {
		cin >> num;
		if(num > n && !s.count(num) && ch > 0) {
			s.insert(num);
			res[ch] = time;
			ch--;
		}
	}
	for(int i=1; i<=n; i++) {
		cout << res[i] << ' ';
	}
	cout << endl;
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

