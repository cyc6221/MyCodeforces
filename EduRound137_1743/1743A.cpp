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
		int n, temp, l, sum=0;
		cin >> n;
		l = 10 - n;
		while(n--) cin >> temp;
		sum = l * (l-1) / 2 * 6;
		cout << sum << endl;
	}
	return 0;
}

