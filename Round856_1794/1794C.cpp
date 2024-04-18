#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n;
	cin >> n;
	vector<int> vt(n), res(n, 1);
	queue<int> q;

	int p = 0, len = 1, tail;
	for(int i=0; i<n; i++) {
		cin >> vt[i];
		
		while(!q.empty() && i > q.front()) {
			q.pop();
		}
		
		tail = vt[i] + i - 1;
		q.push(tail);

		res[i] = q.size();

		/*
		for(int j=i, k=1; j>=0; j--, k++) {
			if(vt[j] >= k) {
				res[i]++;
			}
			else break;
		}*/
	}
	
	for(auto& i : res) {
		cout << i << ' ';
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

