#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n;
	cin >> n;
	vector<int> a(n, 0), b(n, 0), aa;
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	for(int i=0; i<n; i++) {
		cin >> b[i];
	}
	
	int resr = 0, resl = 0, res = -1;
	for(int i=0; i<n; i++) {
		int r = i, l = i;
		while(i+1 < n && b[i+1] >= b[i]) {
			i++;
			l = i;
		}
		//cout << r << " \\ " << l << endl;
		for(int ln = l-r; ln >= 0 && ln > res; ln--) {
			for(int x = r; x + ln <= l && ln > res; x++) {
				aa = {}; //vector<int> aa;
				for(int j=x; j<=x+ln; j++) {
					aa.push_back(a[j]);
				}
				sort(aa.begin(), aa.end());
				
				bool check = 1;
				for(int temp = 0; temp <= ln && check; temp++) {
					if(aa[temp] != b[x+temp]) check = 0;
				}
				if(check && ln > res) {
					//cout << res << " \\ " << ln+1 << endl;
					res = ln;
					resr = x+1;
					resl = x+ln+1;
				}
			}
		}
	}
	cout << resr << ' ' << resl << endl;
}

int main() {
	//ios::sync_with_stdio(0);
	//cin.tie(0);

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		sol();
	}
	return 0;
}

