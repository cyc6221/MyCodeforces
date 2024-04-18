#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
bool check(vector<int> &a, vector<int> &b) {
	for(int i=0, mn; i<26; i++) {
		mn = min(a[i], b[i]);
		a[i] -= mn;
		b[i] -= mn;
	}
	int A=26, B=-1;
	for(int k=0; k<26; k++) {
		if(a[k] > 0) A = min(A, k);
		if(b[k] > 0) B = max(B, k);
	}
	
	if(A == 26 && B == -1) return false;
	if(A == 26) return true;
	if(B == -1) return false;
	if(A == B) return a[A] < b[B];
	else return A < B;
}

int main() {
	int test;
	cin >> test;
	while(test--) {
		int op;
		cin >> op;
		vector<int> a(26, 0), b(26, 0);
		a[0] = 1;
		b[0] = 1;
		while(op--) {
			int x, times;
			string temp, str;
			cin >> x >> times >> str;
			while(times--) temp = temp + str;
			if(x == 1) {
				for(int i=0; i<temp.length(); i++) {
					a[temp[i]-'a']++;
				}
			}
			else if(x == 2) {
				for(int i=0; i<temp.length(); i++) {
					b[temp[i]-'a']++;
				}
			}
			
			if(check(a, b)) cout << "YES\n";
			else cout << "NO\n";
		}
	}
	return 0;
}

