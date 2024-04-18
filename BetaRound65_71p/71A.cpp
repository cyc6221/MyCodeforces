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
		string str;
		cin >> str;
		if(str.length() > 10) cout << str[0] << str.length()-2 << str.back() << endl;
		else cout << str << endl;
	}
	return 0;
}

