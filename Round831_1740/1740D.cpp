#include <bits/stdc++.h>
using namespace std;

/*
void sol(int rem, int k, vector<int>& vt) {
	stack<int> st1, st2;
	
	for(int i=k-1; i>=0; i--) {
		st1.push(vt[i]);
	}

	while(k > 0) {
		while(!st1.empty() && st1.top() != k) {
			st2.push(st1.top());
			st1.pop();
		}
		if(st2.size() > rem) {
			cout << "TIDAK\n";
			return;
		}
		while(!st1.empty() && st1.top() == k) {
			st1.pop();
			k--;
		}
		while(!st2.empty()) {
			if(st2.top() == k) {
				st2.pop();
				k--;
			}
			else {
				st1.push(st2.top());
				st2.pop();
			}
		}
	}
	cout << "YA\n";
}
*/

void sol(int rem, int k, vector<int>& vt) {
	int tail = k, head = max(1, k-rem);
	unordered_set <int> s;
	for(int i=0; i<k; i++) {
		if(vt[i] <= tail && vt[i] >= head) {
			s.insert(vt[i]);
			head--;
		}
	}
	if(s.size() == k) cout << "YA\n";
	else cout << "TIDAK\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin >> test;
	
	int n, m, k, rem;
	while(test--) {
		cin >> n >> m >> k;
		rem = n * m - 4;
		vector<int> vt(k);
		for(int i=0; i<k; i++) cin >> vt[i];
		sol(rem, k, vt);
	}
	return 0;
}

