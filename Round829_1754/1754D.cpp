#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n, x;
	cin >> n >> x;
	vector<long long> vt(n);
	unordered_map <long long, double> ump;
	for(long long i=0; i<n; i++) {
		cin >> vt[i];
		ump[vt[i]]++;
	}

	double mod = 0;

	for(auto u : ump) {
		if(u.first < x) {
			long long m = x;
			for(long long xx = x-1; xx>u.first; xx--) m *= xx;
			//cout << m << endl;
			mod += u.second / m;
			//cout << mod << endl;
		}
	}
	//cout << mod << endl;
	if(mod == floor(mod)) cout << "Yes\n";
	else cout << "No\n";

	return 0;
}


