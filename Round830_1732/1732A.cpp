#include <bits/stdc++.h>
using namespace std;

int gg(vector<int>& vt, int n) {
	int g, cost = INT_MIN;
	for(int i=1; i<=n; i++) {
		cin >> vt[i];
		if(i == 1) g = vt[i];
		else g = __gcd(g, vt[i]);
	}
	if(g == 1) return 0;
	else {
		for(int i=n; i>0; i--) {
			int temp = vt[i];
			vt[i] = __gcd(vt[i], i);
			if(vt[i] == 1) return n - i + 1;
			g = vt[1];
			for(int i=1; i<=n; i++) {
				g = __gcd(g, vt[i]);
			}
			if(g == 1) {
				return n - i + 1;
				//cost = min(cost, n - i + 1 + gg(vt, n));
			}
			else cost = min(cost, n - i + 1 + gg(vt, n));
			vt[i] = temp;
		}
	}
	return cost;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin >> test;
	while(test--) {
		int n, cost=0, g;
		cin >> n;
		vector<int> vt(n+1);
		
		for(int i=1; i<=n; i++) {
			cin >> vt[i];
		}
		cout << gg(vt, n) << '\n';
		/*
		for(int i=1; i<=n; i++) {
			cin >> vt[i];
			if(i == 1) g = vt[i];
			else g = __gcd(g, vt[i]);
		}

		if(g == 1) {
			cout << "0\n";
			continue;
		}

		cout << "G" << g << endl;
		
		for(int i=n; i>0; i--) {
			int temp = vt[i];
			vt[i] = __gcd(vt[i], i);
			g = vt[1];
			for(int i=1; i<=n; i++) {
				g = __gcd(g, vt[i]);
			}
			if(g == 1) {
				cost = n - i + 1;
				break;
			}
			else vt[i] = temp;
		}

		cout << cost << '\n';
		*/
	}
	return 0;
}

