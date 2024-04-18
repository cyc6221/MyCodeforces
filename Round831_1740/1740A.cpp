#include <bits/stdc++.h>
using namespace std;

unordered_set <int> s;

bool isP(int n) {
	if(n == 0 || n == 1) return false;
	if(n == 2) return true;
	if(n % 2 == 0) return false;
	for(int i = 2; i <= n/2; i++) {
		if(n % i == 0) return false;
	}
	return true;
}

void bulid() {
	for(int i=0; i<=100000; i++) {
		if(isP(i)) s.insert(i);
	}
}

void sol(int n) {
	for(int i=2; i<=100000; i++) {
		if(s.count(i)) {
			if(!s.count(i+n)) {
				cout << i << endl;
				return;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	bulid();
	
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		sol(n);
	}
	return 0;
}
