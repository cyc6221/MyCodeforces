#include <bits/stdc++.h>
using namespace std;

void sol() {
	long long n, c, d, inf = 0, sum = 0;
	cin >> n >> c >> d;
	vector<long long> num;
	for(int i=0, temp; i<n; i++) {
		cin >> temp;
		num.push_back(temp);
		if(num.back() >= c) inf = 1;
	}
	if(inf) {
		cout << "Infinity\n";
		return;
	}
	
	sort(num.rbegin(), num.rend());
	if(n < d+1) {
		while(num.size() < d+1) {
			num.push_back(0);
		}
	}
	else {
		num.assign(num.begin(), num.begin() + d + 1);
	}
	
	for(int i=1; i<num.size(); i++) {
		num[i] += num[i-1];
	}
	
	for(long long k = d; k >= 0; k--) {
		sum = 0;
		long long days = d / (k+1);
		sum = num.back() * days;
		if(days % (k+1) != 0) {
			
		}
		/*
		int done = 0;
		for(int j=0; j<d && !done; j++) {
			sum += num[j % (k+1)];
			if(sum >= c) done = 1;
		}
		if(done) {
			if(k == d) cout << "Infinity\n";
			else cout << k << endl;
			return;
		}
		*/
		num.pop_back();
	}
	cout << "Impossible\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		//cout << "Case #" << i << ": ";
		sol();
	}
	return 0;
}

