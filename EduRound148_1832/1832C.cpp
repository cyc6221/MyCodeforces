#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	ll n, num=0;
	cin >> n;
	vector<ll> a;
	for(int i=0; i<n; i++) {
		cin >> num;
		if(a.size() == 0) a.push_back(num);
		else if(a.size() > 0 && a.back() != num) a.push_back(num);
		
	}
	n = a.size();
	if(n == 1) {
		cout << "1\n";
		return;
	}
	//cout << "nfnnnnnnnn " << n << endl;
	int res = 0;
	for(int i=1; i<n-1; i++) {
		//cout << a[i] << ' ';
		if(a[i-1] < a[i] && a[i] > a[i+1]) res++;
		if(a[i-1] > a[i] && a[i] < a[i+1]) res++;
	}
	//cout << endl;
	cout << res + 2 << endl;
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

