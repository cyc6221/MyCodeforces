#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

vector<int> Prime;
bool prime[10000001];

void build_table() {
	int Sqrt = sqrt(10000001);
	prime[0] = prime[1] = true;
	for(int i=2; i<=Sqrt; i++) {
		if(!prime[i]) {
			for(ll k=10000001/i, j=i*k; k>=i; k--, j-=i) {
				if(!prime[k]) {
					prime[j] = true;
				}
			}
		}
	}

	for(int t=2; t<=10000000; t++) {
		if(!prime[t]) Prime.push_back(t);
	}
}

void sol() {
	ll n, temp=1, d;
	cin >> n;
	vector<ll> a(n);
	unordered_map <ll, ll> ump;
	for(ll i=0; i<n; i++) {
		cin >> a[i];
		temp *= a[i];

		temp = a[i], d = 3;
		
		for(auto& i : Prime) {
			while(temp > 1 && temp % i == 0) {
				ump[i]++;
				temp /= i;
			}
			if(temp <= 1) break;
		}
	}
	/*
	for(auto& i : Prime) {
		while(temp > 1 && temp % i == 0) {
			ump[i]++;
			temp /= i;
		}
		if(temp <= 1) break;
	}
	if(temp > 1) ump[temp]++;
	*/
	
	ll res = 0, left = 0;
	for(auto& i : ump) {
		//cout << i.first << ' ' << i.second << endl;
		res += i.second / 2;
		left += i.second % 2;
	}
	//if(left >= 3) {
		res += left / 3;
		//if(left % 3 != 0) res++;
	//}
	cout << res << endl;
}

int main() {
	//ios::sync_with_stdio(0);
	//cin.tie(0);

	Prime = {};
	build_table();
	
	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		sol();
	}
	return 0;
}

