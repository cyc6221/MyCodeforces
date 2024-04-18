#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll x, y;
	cin >> x >> y;
	
	//check//
	ll one = 1, mul;
	while(one <= y) {
		for(ll i = 1; i < 10; i++) {
			mul = one * i;
			if(x <= mul && mul <= y) {
				cout << mul << endl;
				return;
			}
			else if(mul > y) break;
		}
		one *= 10;
		one++;
	}
	//check//
	
	//method 2//
	/*
	vector<ll> d;
	if(x-1 == 0) {
		d.push_back(0);
		mx = 1;
		mn = 1;
	}
	else {
		for(ll temp = x-1; temp > 0; temp /= 10) {
			d.push_back(temp % 10);
			mx = max(mx, temp%10);
			mn = min(mn, temp%10);
		}
		//mx = *max_element(d.begin(), d.end());
		//mn = *min_element(d.begin(), d.end());
	}
	
	for(ll i = x; i <= y; i++) {
		bool go = 0;
		for(ll j = 0; j < d.size(); j++) {
			d[j]++;
			if(d[j] == 10) {
				if(j == d.size()-1) d.push_back(0);
				d[j] = 0;
				go = 1;
				mn = 0;
			}
			else {
				mx = max(mx, d[j]);
				mn = *min_element(d.begin(), d.end());
				break;
			}
		}
		

		if(go) {
			mx = *max_element(d.begin(), d.end());
			//mn = *min_element(d.begin(), d.end());
		}
		else mn = *min_element(d.begin(), d.end());

		
		if(mx - mn == 0) {
			cout << i << endl;
			return;
		}
		else if(mx - mn <= num) {
			res = i;
			num = mx - mn;
		}
	}
	*/
	//method 2//
	
	//method 1//
	//ll x, y, res = 0, num = 9;
	//cin >> x >> y;
	
	ll res = x, num = 9;
	for(ll i=x; i<=y; i++) {
		ll temp = i, mn=9, mx=0;
		while(temp > 0) {
			mn = min(mn, temp%10);
			mx = max(mx, temp%10);
			temp /= 10;
		}
		if(mx - mn <= num) {
			num = mx - mn;
			res = i;
		}
		if(num == 1) {
			cout << i << endl;
			return;
		}
	}
	//method 1//
	cout << res << endl;
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
