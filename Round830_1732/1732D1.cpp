#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin >> test;
	
	unordered_set<unsigned long long int> s;
	char c;
	unsigned long long int n;
	while(test--) {
		cin >> c >> n;
		
		if(c == '+') {
			s.insert(n);
		}
		else if(c == '?') {
			unsigned long long int x = n;
			while(s.count(x)) {
				x += n;
			}
			cout << x << '\n';
		}
	}
	return 0;
}
