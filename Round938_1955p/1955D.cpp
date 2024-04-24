#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    set<int> b;
    unordered_map <int, int> ump;
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0, temp; i<m; i++) {
        cin >> temp;
        b.insert(temp);
        ump[temp]++;
    }

    for(int i=0; i<m; i++) {
        if(b.count(a[i])) ump[a[i]]--;
    }

    int res = 0, check = 0;

    // first check
    for(auto & s : ump) {
        check += (s.second < 0 ? 0 : s.second);
    }
    if(m-check >= k) res++;

    // second check and follow
    for(int i=m; i<n; i++) {
        if(b.count(a[i-m])) {
            ump[a[i-m]]++;
            if(ump[a[i-m]] > 0) check++;
        }
        if(b.count(a[i])) {
            ump[a[i]]--;
            if(ump[a[i]] >= 0) check--;
        }

        if(m-check >= k) res++;
    }
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

