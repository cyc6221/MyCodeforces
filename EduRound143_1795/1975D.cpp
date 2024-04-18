#include <bits/stdc++.h>
using namespace std;

void sol() {
	long long order = 1, color = 1, sub = 1, n, mod = 998244353;
	cin >> n;
	for(int i=0; i<n/3; i++) {
		long long a, b, c;
		cin >> a >> b >> c;
		
		if(a != b && b != c && c != a) {
			order *= 1;
		}
		else if(a == b && b == c) {
			order = (order * 3) % mod;
		}
		else {
			if(a == b) {
				if(a > c) order *= 1;
				else order = (order * 2) % mod;
			}
			else if(b == c) {
				if(b > a) order *= 1;
				else order = (order * 2) % mod;
			}
			else if(c == a) {
				if(c > b) order *= 1;
				else order = (order * 2) % mod;
			}
		}
	}
	long long g = n / 3, t = g / 2;
	for(long long i = g; i > 1; i--) {
		color = (color * i) % mod;
	}
	for(long long j = t; j > 1; j--) {
		sub = (sub * j) % mod;
	}
	sub = (sub * sub) % mod;
	while(color % sub != 0) color += mod;
	color /= sub;
	//while(color < sub) color += mod;
	//color /= sub;
	cout << (order * color) % mod << endl;
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

