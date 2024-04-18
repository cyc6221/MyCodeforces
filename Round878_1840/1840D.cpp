#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n;
	cin >> n;
	vector<int> vt(n);
	for(int i=0; i<n; i++) {
		cin >> vt[i];
	}
	if(n <= 3) {
		cout << "0\n";
		return;
	}
	
	sort(vt.begin(), vt.end());
	int a, b, c, d, e, f;
	a = b = vt[0];
	c = vt[1], d = vt[n-2];
	e = f = vt[n-1];
	
	int i = 1, j = n-2;
	while(i <= j) {
		//vt[i]-a //f-vt[j] //d-c
		if(vt[i] - a <= d - c && vt[i] - a <= f - vt[j]) {
			b = vt[i];
			c = vt[i+1];
			i++;
		}
		else if(f - vt[j] <= d - c && f - vt[j] <= vt[i] - a) {
			e = vt[j];
			d = vt[j-1];
			j--;
		}
		else break;
	}
	
	/*
	for(i=1; i+1<n-1; i++) {
		if(vt[i] - a <= d - c) {
			b = vt[i];
			c = vt[i+1];
		}
		else break;
	}
	for(j=n-1; j-1 > i; j--) {
		if(f - vt[j] <= d - c) {
			e = vt[j];
			d = vt[j-1];
		}
		else break;
	}*/
	//cout << "de " << a << ' ' << b << ' '
	//<< c << ' ' << d << ' ' << e << ' ' << f << endl;
	int res = max({b - (a+b)/2, d - (c+d)/2, f - (e+f)/2});
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

