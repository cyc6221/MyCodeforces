#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	string s;
	cin >> s;
	
	int i=0, j=s.length()-1, c0=0, c1=0;
	for(auto& x : s) {
		if(x == '0') c0++;
		else c1++;
	}
	
	ll cost = 0, rm = 1000000000001, sp = 1000000000000;
	ll cr=0, cs=0;
	
	while(s[i] == '0') {i++; c0--;}
	while(s[j] == '1') {j--; c1--;}
	
	while(i < j) {
		if(c0 == c1) {
			if(j - i == 1) {
				cost += sp;
				s[i] = '0';
				s[j] = '1';
				i++, j--;
			}
			else if(j - i == 2) {
				cost += sp*2;
				s[j] = s[j-1];
				s[i] = '0';
				s[j] = '1';
				i++, j--;
			}
			else cost += rm*2;
			i++, j--;
		}
		else if(c0 > c1) {
			cost += rm;
			i++;
			c1--;
		}
		else if(c0 < c1) {
			cost += rm;
			j--;
			c0--;
		}
		
		while(s[i] == '0') {i++; c0--;}
		while(s[j] == '1') {j--; c1--;}
	}
	
	cout << cost << endl;
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
