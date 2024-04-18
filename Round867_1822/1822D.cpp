#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n;
	cin >> n;
	if(n % 2 == 1) {
		if(n == 1) cout << "1\n";
		else cout << "-1\n";
		return ;
	}
	
	vector<ll> res(n, 0), sum(n, 0);
	res[0] = n;
	for(ll i=2, temp = 2; i<n; i+=2) {
		res[i] = i;
		sum[i] = temp;
		temp += 2;
	}
	for(ll i=1, temp = n-1; i<n; i+=2) {
		res[i] = temp;
		sum[i] = temp;
		temp -= 2;
	}
	set<ll> s;
	s.insert(0);
	for(int i=1; i<n; i++) {
		sum[i] = (sum[i-1] + sum[i]) % n;
		if(s.count(sum[i])) {
			cout << "-1\n";
			return;
		}
		s.insert(sum[i]);
	}
	for(auto& i : res) {
		cout << i << ' ';
	}
	cout << endl;
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

