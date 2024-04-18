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
		if(n == 1) cout << "error\n";
		else if(n == 2) cout << "2 1\n";
		else if(n == 3) cout << "-1\n";
		else {
			vector<int> vt(n);
			vt[0] = n-1;
			vt[1] = n;
			for(int i=2, j=1; i<n; i++, j++) vt[i] = j;
			for(int i=0; i<n; i++) cout<<vt[i]<<' ';
			cout<<endl;
		}
	}
	return 0;
}
