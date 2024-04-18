#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		vector<long long> vt(n);
		unordered_set <long long> s;
		for(int i=0; i<n; i++) {
			cin >> vt[i];
			s.insert(vt[i]);
		}
		sort(vt.begin(), vt.end());
		
		int count = s.size();
		
		if(count >= 3) {
			long long mn1 = vt[n-1] - vt[0], mn2 = vt[n-1] - vt[0];
			for(int i=0; i<n; i++) {
				if(vt[i] != vt[0]){
					mn1 = min(mn1, vt[i] - vt[0]);
				}
				if(vt[i] != vt[n-1]){
					mn2 = min(mn2, vt[n-1] - vt[i]);
				}
			}
			long long res1 = (vt[n-1] - vt[0]) + max(mn1, mn2);
			//cout << (vt[n-1] - vt[0]) + max(mn1, mn2) << endl;
			
			long long nn1, nn2;
			for(int i=n-1; i>=0; i--) {
				if(vt[i] != vt[n-1]) {
					nn1 = vt[i];
					nn2 = vt[i-1];
					break;
				}
			}
			long long res2 = (vt[n-1] - nn1) + (vt[n-1] - nn2);
			
			for(int i=0; i<n; i++) {
				if(vt[i] != vt[0]) {
					nn1 = vt[i];
					nn2 = vt[i+1];
					break;
				}
			}
			long long res3 = (nn1 - vt[0]) + (nn2 - vt[0]);
			
			cout << max({res1, res2, res3}) << endl;
		}
		else if(count == 2) {
			cout << (vt[n-1] - vt[0]) * 2 << endl;
		}
		else if(count == 1) {
			cout << "0\n";
		}
	}
	return 0;
}

