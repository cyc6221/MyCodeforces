#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
bool sol() {
	int n, k, temp;
	bool check = false;
	cin >> n >> k;
	while(n--) {
		cin >> temp;
		if(temp == 1) check = true;
	}
	return check;
}
int main() {
	int test;
	cin >> test;
	while(test--) {
		if(sol()) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

