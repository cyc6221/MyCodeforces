#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>
#include <numeric>

using namespace std;
int main() {
	int test;
	cin >> test;
	while(test--) {
		int n, check=1;
		cin >> n;
		vector<int> vt(n), temp(n+1);
		for(int i=0; i<n; i++) cin >> vt[i];
		
		temp[0] = vt[0];
		temp[n] = vt[n-1];
		for(int i=1; i<n; i++) {
			temp[i] = vt[i-1] * vt[i] / __gcd(vt[i-1], vt[i]);
		}
		for(int i=0; i<n && check; i++) {
			int g = __gcd(temp[i], temp[i+1]);
			if(g != vt[i]) check = 0;
		}
		if(check) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
