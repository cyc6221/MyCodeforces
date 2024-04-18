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
		int n, temp;
		cin >> n;
		int mx = 0, mxi = -1;
		for(int i=1; i<=n; i++) {
			cin >> temp;
			if(temp >= mx) {
				mx = temp;
				mxi = i;
			}
		}
		cout << mxi << endl;
	}
	return 0;
}

