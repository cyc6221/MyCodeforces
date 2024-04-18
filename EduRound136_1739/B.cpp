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
		cin >> n;
		vector<int> d(n);
		for(int i=0; i<n; i++) cin >> d[i];
		
		int check = 1;
		vector<int> sol(n);
		sol[0] = d[0];
		for(int i=1; i<n && check; i++) {
			if(d[i] != 0 && sol[i-1] - d[i] >= 0) check = 0;
			else {
				sol[i] = sol[i-1] + d[i];
			}
		}
		if(check) {
			for(int i=0; i<n; i++) cout << sol[i] << ' ';
			cout << endl;
		}
		else cout << "-1\n";
	}
	return 0;
}
