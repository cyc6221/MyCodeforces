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
		int a, b, c;
		cin >> a >> b >> c;
		if(a == b + c) cout << "YES\n";
		else if(b == a + c) cout << "YES\n";
		else if(c == a + b) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
