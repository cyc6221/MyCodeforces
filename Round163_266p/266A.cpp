#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
	int n, count=0;
	string str;
	cin >> n >> str;
	for(int i=0; i+1<str.length(); i++) {
		if(str[i] == str[i+1]) count++;
	}
	cout << count << endl;
	return 0;
}
