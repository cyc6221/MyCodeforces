#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, k;
	string s;
	cin >> n >> k >> s;
	
	vector<int> hi(26, 0), lo(26, 0);
	for(auto& i : s) {
		if(0 <= i-'a' && i-'a' < 26) {
			lo[i-'a']++;
		}
		else {
			hi[i-'A']++;
		}
	}
	
	int res = 0, diff = 0;
	for(int i=0; i<26; i++) {
		//cout << i << ' ' << hi[i] << ' ' << lo[i] << endl;
		if(hi[i] == 1 && lo[i] == 0) continue;
		if(hi[i] == 0 && lo[i] == 1) continue;
		res += min(hi[i], lo[i]);
		diff += (hi[i] + lo[i]) / 2 - min(hi[i], lo[i]);
	}
	
	if(diff >= k) res += k;
	else res += diff;
	
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

