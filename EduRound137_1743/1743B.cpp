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
		if(n == 1) cout << "1\n";
		else if(n == 2) cout << "1 2\n";
		else {
			cout << 1 << ' ' << n << ' ';
			for(int i=2; i<n; i++) cout << i << ' ';
			cout << endl;
		}
	}
	return 0;
}
