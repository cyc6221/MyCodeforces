#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin >> test;
	while(test--) {
		int n, m;
		cin >> n >> m;
		
		//vector<int> col(n+1, 0), row(n+1, 0);
		int x, y;
		for(int i=0; i<m; i++) {
			cin >> x >> y;
		}
		
		if(m > n) {
			cout << "NO\n";
		}
		else if(m < n) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}

