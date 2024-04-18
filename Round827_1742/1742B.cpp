#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
	int test;
	cin >> test;
	while(test--) {
		int n, check=1;
		cin >> n;
		vector<int> vt(n);
		for(int i=0; i<n; i++) cin >> vt[i];
		sort(vt.begin(), vt.end());
		for(int i=0; i+1<n; i++) {
			if(vt[i] == vt[i+1]) check = 0;
		}
		if(check) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

