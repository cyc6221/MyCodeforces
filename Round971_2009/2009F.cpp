#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	unll n, q;
	cin >> n >> q;
	vector<unll> vt(n+1), pre(2*n+1, 0);
	unll sum = 0;
	for(int i=1; i<=n; i++) {
		cin >> vt[i];
		sum += vt[i];
		pre[i] = sum;
	}
	for(int i=n+1; i<=2*n; i++) {
		pre[i] = pre[i-1] + vt[i % n];
	}

	/*
	vector<unll> pre(n * n + 1);
	pre[0] = 0;
	unll mod = 1, sh = 0, temp;
	for(int i=1; i<=n*n; i++) {
		pre[i] = pre[i-1];
		
		temp = mod + sh;
		if(temp > n) temp -= n;
		//cout << "tttt " << temp << endl;

		pre[i] += vt[temp];

		mod++;
		if(mod > n) mod = 1;

		if(i % n == 0) sh++;
	}
	*/

	/*
	for(int i=0; i<=n*n; i++) {
		cout << pre[i] << ' ';
	}
	cout << endl;
	*/
	

	while(q--) {
		unll l, r, L, R;
		cin >> l >> r;
		l--;

		unll sh, mod, sm;		

		if(l % n == 0) L = sum * (l / n);
		else {
			sh = l / n;
			mod = l - sh * n;
			//sm = sh + mod; if(sm > n) sm -= n+1;
			//cout << sh << ' ' << mod << ' ';
			L = sh * sum + pre[sh + mod] - pre[sh];
		}
		//cout << L << endl;

		if(r % n == 0) R = sum * (r / n);
		else {
			sh = r / n;
			mod = r - sh * n;
			R = sh * sum + pre[sh + mod] - pre[sh];
		}
		//cout << R << ' ' << L << endl;
		cout << R - L << endl;
	}
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