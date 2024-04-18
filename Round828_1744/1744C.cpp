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
		int n;
		char sym;
		string str;
		cin >> n >> sym >> str;
		if(sym == 'g') cout << "0\n";
		else {
			str = str + str;
			vector<int> tar, gg;
			for(int i=0; i<str.length(); i++) {
				if(str[i] == sym) tar.push_back(i);
				if(str[i] == 'g') gg.push_back(i);
			}
			int mx = 0;
			for(int i=0, j=0; i<tar.size() && j<gg.size(); ) {
				if(tar[i] < gg[j]) {
					mx = max(mx, gg[j]-tar[i]);
					i++;
				}
				else {
					j++;
				}
			}
			cout << mx << endl;
			
			/*
			int mx = 0;
			for(int i=0; i<str.length(); i++) {
				if(str[i] == sym) {
					for(int j=i+1; j<str.length(); j++) {
						if(str[j] == 'g') {
							mx = max(mx, j - i);
							break;
						}
					}
				}
			}
			cout << mx << endl;
			*/
		}
	}
	return 0;
}

