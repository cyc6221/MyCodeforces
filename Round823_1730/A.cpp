#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
	int test, n, cost2, mx, mval;
	cin >> test;
	while(test--) {
		cin >> n >> cost2;
		unordered_map<int, int> ump;
		int temp = 0, cost = INT_MAX;
		for(int i=0, x; i<n; i++) {
			cin >> x;
			ump[x]++;
			temp ++;
		}
		cost = temp;

		
		while(true){
			mx = 0;
			for(auto& i : ump) {
				if(i.second > mx) {
					mx = i.second;
					mval = i.first;
				}
			}
			if(mx == 0) break;
			
			temp -= mx;
			ump[mval] = 0;
			temp += cost2;
			cost = min(cost , temp);
		}
		cout << cost << endl;
	}
	return 0;
}
