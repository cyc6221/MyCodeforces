#include <bits/stdc++.h>
using namespace std;

long long cal(string s) {
	long long n = 0;
	while(s.length() > 0) {
		n *= 2;
		if(s.front() == '1') n += 1;
		s.erase(s.begin());
	}
	return n;
}

void sol() {
	long long n, temp, base=1, cur=0;
	cin >> n; temp = n;
	string str;
	while(temp > 0) {
		string mod = (temp % 2 == 1) ? "1" : "0";
		str = mod + str;
		temp /= 2;
	}
	while(base <= n) base *= 2;
	base /= 2;
	//cout << base << endl;
	
	string res;
	for(int i=0; i<str.length(); i++) {
		if(str[i] == '1') {
			cur += base;
			res += "1";
		}
		else { //== '0'
			if(n*2 - cur >= base*2) {
				cur += 2 * base;
				res += "1";
			}
			else res += "0";
		}
		base /= 2;
	}
	if(cur != 2*n) {
		cout << "-1\n";
	}
	else {
		long long a = cal(res);
		long long b = 2 * n - a;
		cout << a << ' ' << b << endl;
	}
	/*
	long long i, j, temp, limit = 1;
	while(limit <= n) limit *= 2;
	i = limit / 2 - 1;
	j = n * 2 - i;
	//2 ^ 32 = 4294967296
	while(i >= limit / 4 && j < limit) {
		temp = i ^ j;
		if(temp == n) {
			cout << i << ' ' << j << endl;
			return;
		}
		i--;
		j++;
	}
	cout << "-1\n";
	*/
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

