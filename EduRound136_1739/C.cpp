#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;

int comb(int m, int n) {
	if(n == 0) return 1;
	if(n == 1) return m;
	if(m - n == 1) return m;
	if(m == 1) return 1;
	return comb(m-1, n-1) + comb(m-1, n);
}

int main() {
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		
		int count;
		while(n >= 4) {
			count += comb(n-1, n/2);
			n -= 4;
		}
		cout << count << endl;
	}
	return 0;
}
