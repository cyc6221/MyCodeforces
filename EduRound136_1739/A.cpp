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
		int n, m;
		cin >> n >> m;
		if(n == 1 || m == 1) cout << n << ' ' << m << endl;
		else if(n == 2 && m == 2) cout << n << ' ' << m << endl;
		else if(n == 3 && m == 3) cout << 2 << ' ' << 2 << endl;
		else if(n == 2 && m == 3) cout << n-1 << ' ' << m-1 << endl;
		else if(n == 3 && m == 2) cout << n-1 << ' ' << m-1 << endl;
		else cout << n << ' ' << m << endl;
	}
	return 0;
}
