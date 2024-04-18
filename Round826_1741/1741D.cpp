#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
bool valid(vector<int> &vt, int n, int h, int t) {
	//cout << endl;
	if(n == 1 || n == 2) return true;
	int large = (vt[h] > n/2) ? 1 : 0;
	for(int i=h; i<t; i++) {
		//cout << vt[i] << ' ';
		//if(vt[i] > n) return false;
		if(i < (h+t)/2) {
			if((vt[i] > n/2) != large) return false;
			if(large) vt[i] -= n/2;
		}
		else{
			if((vt[i] > n/2) == large) return false;
			if(!large) vt[i] -= n/2;
		}
	}
	return valid(vt, n/2, h, (n/2)) && valid(vt, n/2, n/2, t);
}
int main() {
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		vector<int> vt(n);
		for(int i=0; i<n; i++) cin >> vt[i];
		
		//if(valid(vt, n)) cout << "t\n";
		//else cout << "f\n";
		
		vector<int> temp = vt;
		int op = 0;
		if(valid(temp, n, 0, n)) {
			for(int x = n; x >= 2; x /= 2) {
				for(int i=0; i<n; i+=x) {
					//cout << x << ' ' << vt[i] << ' ';
					if(vt[i]%x > x/2 || vt[i]%x == 0) {
						//cout << x << ' ' << vt[i] << ' ';
						op++;
					}
				}
			}
			cout << op << endl;
		}
		else cout << "-1\n";
	}
	return 0;
}
