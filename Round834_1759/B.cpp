#include <bits/stdc++.h>
using namespace std;

bool sol() {
	int n, sum, mx = 0;
	//vector<int> vt(n);
	set<int> s;
	cin >> n >> sum;
	for(int i=0, temp; i<n; i++) {
		cin >> temp;
		s.insert(temp);
		mx = max(mx, temp);
	}
	
	for(int i=1; sum > 0 || i <= mx; i++) {
		if(s.count(i));
		else {
			sum -= i;
		}
	}
	return sum == 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		//cout << "Case #" << i << ": ";
		sol() ? cout << "Yes\n" : cout << "No\n";
	}
	return 0;
}

