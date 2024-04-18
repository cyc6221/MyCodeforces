#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n;
	cin >> n;
	vector<int> odd, even;
	string s;
	//vector<string> vt(n);
	vector<vector<int>> let(n, vector<int>(26, 0));
	for(int i=0; i<n; i++) {
		//cin >> vt[i];
		cin >> s;
		
		//for(auto& w : vt[i]) {
		for(auto& w : s) {
			let[i][w-'a']++;
		}
		
		//if(vt[i].length() % 2 == 1) odd.push_back(i);
		if(s.length() % 2 == 1) odd.push_back(i);
		else even.push_back(i);
	}

	int res = 0;
	for(auto& i : odd) {
		for(auto& j : even) {
			int cnt = 0, ok = 1;
			for(int x=0; x<26 && ok; x++) {
				if(let[i][x] == 0 && let[j][x] == 0) cnt++;
				else if((let[i][x] + let[j][x]) % 2 == 0) ok = 0;
			}
			if(cnt < 2 && ok) res++;
		}
	}
	/*
	for(auto& i : odd) {
		for(auto& j : even) {
			vector<int> temp(26, 0);
			int cnt = 0;
			for(int x=0; x<26; x++) {
				temp[x] = let[i][x] + let[j][x];
				if(temp[x] > 0) {
					cnt++;
					if(temp[x] % 2 == 0) break;
				}
			}
			if(cnt == 25) {
				res++;
				//cout << i << ' ' << j << endl;
			}
		}
	}*/
	cout << res << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	//int test; cin >> test;
	//for(int i=1; i<=test; i++) {
		sol();
	//}
	return 0;
}

