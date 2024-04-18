#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	string s1, s2;
	int blocked_time, Q, op, len, t=0;
	cin >> s1 >> s2 >> blocked_time >> Q;
	len = s1.length();
	vector<int> block(len, -1);
	
	set<int> same;
	for(int i=0; i<len; i++) {
		if(s1[i] != s2[i]) {
			same.insert(i);
		}
	}
	for(t=0; t<Q; t++) {
		cin >> op;
		if(op == 1) {
			//block some char at pos
			int pos;
			cin >> pos;
			block[pos-1] = t + blocked_time;
		}
		else if(op == 2) {
			//swap two unblocked char
			int sp1, wd1, sp2, wd2;
			cin >> sp1 >> wd1 >> sp2 >> wd2;
			
			char c1, c2;
			
			if(sp1 == 1) c1 = s1[wd1-1];
			else c1 = s2[wd1-1];
			
			if(sp2 == 1) c2 = s1[wd2-1];
			else c2 = s2[wd2-1];
			
			if(c1 == c2) continue;
			
			if(sp1 == 1) s1[wd1-1] = c2;
			else s2[wd1-1] = c2;

			if(sp2 == 1) s1[wd2-1] = c1;
			else s2[wd2-1] = c1;
			
			if(s1[wd1-1] == s2[wd1-1]) same.erase(wd1-1);
			else same.insert(wd1-1);
			if(s1[wd2-1] == s2[wd2-1]) same.erase(wd2-1);
			else same.insert(wd2-1);
		}
		else { //op==3
			//determine two strings are equal
			
			bool check = 1;
			for(auto& i : same) {
				if(block[i] <= t) {
					check = 0;
					cout << "NO\n";
					break;
				}
			}
			if(check) cout << "YES\n";
			//else cout << "NO\n";
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		sol();
	}
	return 0;
}

