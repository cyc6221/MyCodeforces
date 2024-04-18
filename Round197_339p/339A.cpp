#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
	string str, sol;
	cin >> str;
	vector<int> vt;
	for(int i=0; i<str.length(); i++) {
		if(str[i] == '+');
		else if(str[i] == '1') vt.push_back(1);
		else if(str[i] == '2') vt.push_back(2);
		else if(str[i] == '3') vt.push_back(3);
	}
	sort(vt.begin(), vt.end());
	sol = vt[0]+'0';
	for(int i=1; i<vt.size(); i++) {
		sol.append("+");
		if(vt[i] == 1) sol.append("1");
		if(vt[i] == 2) sol.append("2");
		if(vt[i] == 3) sol.append("3");
	}
	cout << sol << endl;
	return 0;
}

