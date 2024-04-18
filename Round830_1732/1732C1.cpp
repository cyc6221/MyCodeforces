#include <bits/stdc++.h>
using namespace std;

long long func(vector<long long>& vt, long long a, long long b) {
	long long sum = vt[a], xx = vt[a];
	for(long long i=a+1; i<=b; i++) {
		sum += vt[i];
		xx = xx ^ vt[i];
	}
	//cout << ' ' << a << ' ' << b << endl;
	//cout << sum << ' ' << xx << endl;
	return sum - xx;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin >> test;
	while(test--) {
		long long n, q, L, R;
		cin >> n >> q;
		vector<long long> vt(n+1);
		for(long long i=1; i<=n; i++) cin >> vt[i];
		cin >> L >> R;
		
		long long l = L, r = R, mx = 0, mnlen = INT_MAX;
		for(long long len = 0; len <= n; len++) {
			for(long long i=1; i+len<=n; i++) {
				long long j = i+len;
				long long temp = func(vt, i, j);
				if(temp > mx) {
					mx = temp;
					l = i;
					r = j;
					mnlen = r - l + 1;
				}
				else if(temp == mx) {
					if(mnlen > j - i + 1) {
						l = i;
						r = j;
						mnlen = r - l + 1;
					}
				}
			}
		}
		cout << l << ' ' << r << '\n';
	}
	return 0;
}

