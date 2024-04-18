#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, Q;
	cin >> n >> Q;
	vector<int> a(n+1);
	for(int i=1; i<=n; i++) {
		cin >> a[i];
	}

	vector<int> v(n+1, 0);
	int mx = -1, mxi, mn = -1, mni;
	for(int i=1; i<=n; i++) {
		if(mn == -1) {
			if(a[i] > mx) {
				if(mx != -1) {
					//v[mxi] = 1;
				}
				mx = a[i];
				mxi = i;
			}
			else {
				mn = a[i];
				mni = i;
			}
		}
		else {
			if(a[i] > mn) {
				//v[mxi] = 1;
				//v[mni] = 1;
				mx = a[i];
				mxi = i;
				mn = -1;
				mni = 0;
			}
			else {
				v[mni] = mxi;
				mn = a[i];
				mni = i;
			}
		}
	}
	//if(mx != -1) v[mxi] = 1;
	//if(mn != -1) v[mni] = 1;

	/*
	for(int i=1; i<=n; i++) {
		cout << v[i] << ' ';
	} cout << endl;*/

	vector<int> pre(n+1, 0);
	for(int i=1; i<=n; i++) {
		if(v[i] == 0) pre[i] = 1;
		pre[i] += pre[i-1];
	}

	vector<int> b(n+1, 0);
	int back = n;
	for(int i=n; i>=1; i--) {
		if(v[i] > 0) b[i] = back;
		else back = i;
	}
	while(Q--) {
		int l, r;
		cin >> l >> r;
		if(r - l + 1 <= 2) {
			cout << r - l + 1 << endl;
			continue;
		}
		int res = pre[r] - pre[l-1];
		if(v[l] > 0) {
			res++;
		}
		if(b[r] > 0) {
			res++;
		}
		cout << res << endl;
	}
	/*
	while(Q--) {
		int l, r, diff = 0;
		cin >> l >> r;
		for(int i=l; i<=r; i++) {
			if(v[i] == 0) continue;

			int x = (v[i] >= l) ? v[i] : l;
			int y = (b[i] <= r) ? b[i] : r;
			if(v[x] == 0) diff--;
			if(v[y] == 0) diff--;
			i = y;
			if(v[x] == 0 && v[y] == 0) continue;
			//if(l <= x && y <= r) continue;
			int mx = -1, mn = -1;
			for(int j=x; j<=y; j++) {
				if(mn == -1) {
					if(a[j] > mx) {
						if(mx != -1) diff++;
						mx = a[j];
					}
					else {
						mn = a[j];
					}
				}
				else {
					if(a[j] > mn) {
						diff += 2;
						mx = a[j];
						mn = -1;
					}
					else {
						mn = a[j];
					}
				}
			}
			if(mx != -1) diff++;
			if(mn != -1) diff++;
		}
		//cout << diff << ' ';
		cout << pre[r] - pre[l-1] + diff << endl;
	}*/
	
	/*
	int l, r, res, mx, mn;
	while(Q--) {
		res = 0;
		cin >> l >> r;
		mx = -1, mn = -1;
		for(int i=l; i<=r; i++) {
			//cout << i << ' ' << res << endl;
   			if(mn == -1) {
				if(a[i] > mx) {
					if(mx != -1) res++;
					mx = a[i];
				}
				else {
					mn = a[i];
				}
			}
			else {
				if(a[i] > mn) {
					res += 2;
					mx = a[i];
					mn = -1;
				}
				else {
					mn = a[i];
				}
			}
		}
		if(mx != -1) res++;
		if(mn != -1) res++;
		cout << res << endl;
	}
	*/
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

