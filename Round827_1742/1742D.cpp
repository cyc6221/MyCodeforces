#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std;
int gcd(vector<int> &vt, int n) {
	unordered_set<int> set;
	int mx=-1;
	for(int i=n-1, j=n-1; i>=0; j--) {
		if(set.count(vt[i]) == 0) {
			if(i+j+2 > mx) {
				if(__gcd(vt[i], vt[j]) == 1) {
					mx = max(mx, i+j+2);
				}
			}
		}
		else j=i;
		if(i == j) {
			set.insert(vt[i]);
			i--;
			j = n;
		}
	}
	return mx;
}
int main() {
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		vector<int> vt(n);
		for(int i=0; i<n; i++) cin >> vt[i];
		cout << gcd(vt, n) << endl;
	}
	return 0;
}
