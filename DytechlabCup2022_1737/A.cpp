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
		string str;
		cin >> str;
		
		for(int i=0; i<n; i++) {
			al[str[i]-'a']++;
		}
		
		string sol="";
		while(k--) {
			for(int i=0, chosen=0, len=0; !chosen || len<div; i++) {
				if(len < div && al[i] > 0) {
					al[i]--;
					len++;
				}
				else if(!chosen) {
					sol += ('a' + i);
					chosen = 1;
				}
			}
		}
		cout << sol << endl;
	}
	return 0;
}
