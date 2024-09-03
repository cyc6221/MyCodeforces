#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
    int n;
    cin >> n;
    vector<int> p(n+1);
    for(int i=1; i<=n; i++) {
        cin >> p[i];
    }
    string s;
    cin >> s;
    s = "1" + s;

    vector<int> res(n+1, 0);
    vector<int> vis(n+1, 0);
    for(int i=1; i<=n; i++) {
        int cnt = 0, j = i;
        vector<int> index;
        while(vis[j] == 0) {
            vis[j] = 1;
            index.push_back(j);
            if(s[j] == '0') cnt++;
            j = p[j];
        }
        for(int x=0; x<index.size(); x++) {
            res[index[x]] = cnt;
        }
    }
    for(int i=1; i<=n; i++) {
        cout << res[i] << ' ';
    }
    cout << endl;
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

