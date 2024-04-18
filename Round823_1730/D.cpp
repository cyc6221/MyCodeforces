#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;
int main() {
	int test;
	cin >> test;
	while(test--) {
		int n, done = 1;
		string s1, s2;
		cin >> n >> s1 >> s2;
		vector<int> vt(26, 0);
		//vector<int> vt1(26, 0), vt2(26, 0);
		
		for(int i=0; i<n; i++) {
			vt[s1[i] - 'a'] ++;
			vt[s2[i] - 'a'] ++;
			//vt1[s1[i] - 'a'] ++;
			//vt2[s2[i] - 'a'] ++;
		}
		for(int i=0; i<26; i++) {
			if(vt[i] % 2 == 1) {
			//if(vt1[i] != vt2[i]) {
				done = 0;
				break;
			}
		}
		if(done) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
