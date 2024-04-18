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
		int n, temp;
		cin >> n;
		vector<int> vt(n), al(26, -1);
		unordered_map <int, char> ump;
		for(int i=0; i<n; i++) {
			cin >> vt[i];
			ump[vt[i]] = '.';
		}
		string str;
		cin >> str;
		int check = 1;
		for(int i=0; i<n && check; i++) {
			if(ump[vt[i]] == '.') {
				ump[vt[i]] = str[i];
			}
			else {
				if(ump[vt[i]] != str[i]) check = 0;
			}
		}
		if(check) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

