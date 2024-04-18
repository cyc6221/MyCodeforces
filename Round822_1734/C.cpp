#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>

using namespace std;
int main() {
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		string st;
		cin >> st;
		
		vector<int> s(n+1, 1), t(n+1, 0);
		for(int i=0; i<n; i++) {
			if(st[i] == '1') t[i+1] = 1;
		}
		
		int cost = 0;
		for(int k=1; k<=n; k++) {
			for(int time = 1; k*time <= n; time++) {
				if(s[k*time] == 1) {
					if(t[k*time] == 0) {
						cost += k;
						t[k*time] = 1;
						s[k*time] = 0;
					}
					else break;
				}

			}
		}
		cout << cost << endl;
	}
	return 0;
}
