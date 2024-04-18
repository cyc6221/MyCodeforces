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
		int n;
		string s;
		cin >> n >> s;
		vector<int> mag(n);
		for(int i=0; i<n; i++) cin >> mag[i];
		
		vector<int> dp(n);
		dp[0] = (s[0] == '1') ? mag[0] : 0;
		
		int pre = (s[0] == '1') ? 1 : 0;
		
		for(int i=1; i<n; i++) {
			if(s[i] == '1') {
				if(pre == 1) dp[i] = dp[i-1] + mag[i];
				else {
					if(mag[i-1] >= mag[i]) {
						dp[i] = dp[i-1] + mag[i-1];
						pre = 0;
					}
					else {
						dp[i] = dp[i-1] + mag[i];
						pre = 1;
					}
					
				}
			}
			else {
				pre = 0;
				dp[i] = dp[i-1];
			}
			//cout << dp[i] << endl;
		}
		
		cout << dp[n-1] << endl;
	}
	return 0;
}

