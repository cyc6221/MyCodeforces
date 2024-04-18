#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
bool check(vector<int>& vt, int n, int i, int j) {
	if(i > n) return false;
	if(i == n) return true;
	if(i > j) {
		if(vt[i] != i-j) return false;
		else return check(vt, n, i+1, i+1);
	}
	else {
		if(check(vt, n, vt[i]+i+1, vt[i]+i+1)) return true;
		for(int k=1; i+k<n; k++) {
			if(check(vt, n, i+k, j)) return true;
		}
		return false;
	}
}


int main() {
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		vector<int> vt(n);
		for(int i=0; i<n; i++) cin >> vt[i];
		
		if(check(vt, n, 0, 0)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
