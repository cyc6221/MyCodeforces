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
		vector<int> al(26, 0);
		int n, k, div;
		cin >> n >> k;
		div = n / k;
		//string str;
		//cin >> str;
		
		char temp;
		for(int j=0; j<n; j++) {
			cin >> temp;
			al[temp-'a']++;
		}
		
		
		string sol="";
		while(k--) {
			int i=0, chosen=0;
			for(int len=0; len<div && i<26; i++) {
				if(al[i] > 0) {
					al[i]--;
					len++;
				}
				else if(!chosen) {
					sol += ('a' + i);
					chosen = 1;
				}
			}
			if(!chosen) sol += ('a' + i);
		}
		cout << sol << endl;
	}
	return 0;
}
