#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;

int main() {
	int test;
	cin >> test;
	while(test--) {
		string str;
		cin >> str;
		int len = str.length(), start = str[0]-'a', end = str[len-1]-'a', jump = 0;
		
		vector<vector<int>> vt(26);
		for(int i=0; i<len; i++)
			vt[str[i] - 'a'].push_back(i+1);
		
		vector<int> sol;
		for(int i=start, sign = (start < end) ? 1 : -1; i != end+sign; i+=sign)
			for(int j=0; j<vt[i].size(); j++, jump++)
				sol.push_back(vt[i][j]);
		
		cout << abs(str[0] - str[len-1]) << ' ' << jump << endl;
		for(auto i : sol) cout << i << ' ';
		cout << endl;
	}
	return 0;
}
