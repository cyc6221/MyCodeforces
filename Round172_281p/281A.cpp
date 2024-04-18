#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
	string str;
	cin >> str;
	if(str[0]-'A' < 0 || str[0]-'A' > 25) str[0] = (str[0]-'a') + 'A';
	cout << str;
	return 0;
}

