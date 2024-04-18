#include <bits/stdc++.h>
using namespace std;

void sol() {
	string str;
	cin >> str;
	int n = str.length();
	
	string A, B;
	int i = n-1;
	while(i >= 0 && str[i]-'0' >= 0 && str[i]-'0' <= 9) {
		A = str[i] + A;
		i--;
	}
	while(i >= 0 && str[i]-'A' >= 0 && str[i]-'A' <= 25) {
		B = str[i] + B;
		i--;
	}
	if(i < 0) {
		int row = 0, col = 0;
		for(int j=0; j<A.length(); j++) {
			row *= 10;
			row += (A[j] - '0');
		}
		for(int j=0; j<B.length(); j++) {
			col *= 26;
			col += (B[j] - 'A' + 1);
		}
		cout << "R" << row << "C" << col << endl;
		return;
	}
	string C, D;
	while(i >= 0 && str[i]-'0' >= 0 && str[i]-'0' <= 9) {
		C = str[i] + C;
		i--;
	}
	while(i >= 0 && str[i]-'A' >= 0 && str[i]-'A' <= 25) {
		D = str[i] + D;
		i--;
	}
	int num = 0, mod = -1;
	for(int j=0; j<A.length(); j++) {
		num *= 10;
		num += A[j] - '0';
	}
	string s;
	while(num > 0) {
		if(mod == 0) {
			num--;
			mod = -1;
			continue;
		}
		mod = num % 26;
		char c = (mod == 0) ? 'Z' : (mod + 'A' - 1);
		s = c + s;
		num /= 26;
	}
	cout << s << C << endl;
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

