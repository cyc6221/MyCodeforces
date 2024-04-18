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
		cin >> n;
		vector<int> skill(n), fire, forst;
		for(int i=0; i<n; i++) cin >> skill[i];
		for(int i=0; i<n; i++) {
			int temp;
			cin >> temp;
			if(skill[i] == 0) fire.push_back(temp);
			if(skill[i] == 1) forst.push_back(temp);
		}
		sort(fire.begin(), fire.end());
		sort(forst.begin(), forst.end());
		
		int mn = 0;
		if(fire.size() == forst.size()) {
			int check = 1;
			for(int i=0; check && i<fire.size(); i++) {
				if(fire[i] < forst[i]) {
					mn = fire[i];
					check = 0;
				}
				else if(fire[i] > forst[i]) {
					mn = forst[i];
					check = 0;
				}
			}
			if(check) mn = fire[0];
		}
		
		int len = min(fire.size(), forst.size());
		unsigned long long int sum = 0;
		for(int i=0; i<len; i++) {
			sum += fire.back()*2;
			fire.pop_back();
			sum += forst.back()*2;
			forst.pop_back();
		}
		while(!fire.empty()) {
			sum += fire.back();
			fire.pop_back();
		}
		while(!forst.empty()) {
			sum += forst.back();
			forst.pop_back();
		}
		sum -= mn;
		
		cout << sum << endl;
	}
	return 0;
}
