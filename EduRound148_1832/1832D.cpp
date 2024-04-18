#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n, Q, k;
	cin >> n >> Q;
	vector<ll> a(n);
	for(ll i=0; i<n; i++) {
		cin >> a[i];
	}
	while(Q--) {
		cin >> k;
		
		priority_queue<ll> pq1;
		priority_queue<ll, vector<ll>, greater<ll>> pq2;
		for(auto& i : a) pq2.push(i);
		
		ll kk = min(k, n);
		while(kk > 0) {
			auto x = pq2.top();
			pq2.pop();
			pq1.push(x + kk);
			kk--;
		}
		
		kk = min(k, n) + 1;
		while(kk <= k) {
			if(!pq2.empty()) {
				auto x = pq2.top();
				pq2.pop();
				x += kk;
				pq1.push(x);
			}
			else {
				auto x = pq1.top();
				pq1.pop();
				x -= kk;
				pq2.push(x);
			}
			kk++;
		}
		
		ll mn = pq1.top();
		while(!pq1.empty()) {
			cout << pq1.top() << ' ';
			mn = min(mn, pq1.top());
			pq1.pop();
		}
		while(!pq2.empty()) {
			cout << pq2.top() << ' ';
			mn = min(mn, pq2.top());
			pq2.pop();
		}
		cout << mn << endl;
	}
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

