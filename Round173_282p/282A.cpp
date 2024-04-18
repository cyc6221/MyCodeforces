#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
	int test, x=0;
	cin >> test;
	string str;
	while(test--) {
		cin >> str;
		if(str[1] == '+') x++;
		else x--;
	}
	cout << x << endl;
	return 0;
}

