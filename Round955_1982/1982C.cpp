#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, l, r;
	cin >> n >> l >> r;
	vector<int> a(n);
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}

	//vector<pair<int, int>> w;
	vector<int> w(n, -1);
	int tempsum = 0;
	for(int i=0; i<n; i++) {
		if(a[i] >= l && a[i] <= r) {
			w[i] = i;
		}
		else if(a[i] < l) {
			int ii = i, jj = i;
			while(jj < n && jj < l) jj++;
			for(int x=ii; x<jj; x++) {
				int temp = 0;
				for(int y=x; y<jj; y++) {
					temp+=a[y];
					if(temp > r) break;
					if(temp >= l) w[y] = max(w[y], x);
				}
			
			}
			i = jj;
		}
	}

	int mx = 0;
	vector<int> res(n, 0);
	for(int i=0; i<n; i++) {
		if(w[i] == -1) {
			if(i == 0) res[i] = 0;
			else res[i] = res[i-1];
		}
		else if(w[i] == 0) {
			if(i==0) res[i] = 1;
			else res[i] = max(res[i-1], 1);
		}
		else {
			res[i] = max(res[i-1], res[w[i]-1]+1);
		}

		mx = max(res[i], mx);
	}
	//for(auto& i : res) cout << i << ' '; cout << endl;
	//cout << res[n-1] << endl;
	//cout << *max_element(res.begin(), res.end()) << endl;
	cout << mx << endl;
	return;

/*
	sort(w.begin(), w.end());
	int index = 1;
	for(int i=0; i<w.size(); ) {
		int x = w[i].first+1, y = w[i].second+1;
		while(index <= x) {
			res[index] = max(res[index], res[index-1]);
			index++;
		}

		//res[x] = max(res[x], res[x-1]);
		res[x] = max(res[x], res[y-1]+1);
		while(i<w.size() && w[i].first+1 == x) {
			//res[x] = max(res[x], res[w[i].second] + 1);
			i++;
		}
	}
	//cout << res[n] << endl;
	cout << *max_element(res.begin(), res.end()) << endl;*/

	/*
	sort(w.begin(), w.end());
	for(auto& P:w) {
		cout << P.first << ' ' << P.second << endl;
	}
	*/

	/*
	int maxres = 0;
	vector<int> res(n, 0);
	for(int i=0; i<n; i++) {
		if(i>0) res[i] = max(res[i], res[i-1]);
		maxres = max(maxres, res[i]);
		for(auto& P : w) {
			int x = P.first, y = P.second;
			if(y == i) {
				if(x-1>=0) res[y] = max(res[y], res[x-1] + 1);
				else res[y] = max(res[y], 1);
				maxres = max(maxres, res[y]);
			}
		}
	}*/
	//for(auto&i:res) cout << i << ' ';
	//cout << endl;
	//cout << maxres << endl;
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

