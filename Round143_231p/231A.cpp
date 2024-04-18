#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
int a, b, c;
bool sol() {
	if(a && b) return true;
	if(a && c) return true;
	if(b && c) return true;
	return false;
}
int main() {
	int test, count=0;
	cin >> test;
	while(test--) {
		cin >> a >> b >> c;
		if(sol()) count++;
	}
	cout << count << endl;
	return 0;
}

