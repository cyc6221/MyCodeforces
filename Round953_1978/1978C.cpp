#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

bool dfs(int index, ll sum, ll target, vector<int>& visit) {
    if(index >= visit.size()) {
        if(sum == target) {
            return true;
        }
        else return false;
    }
    if(sum > target) return false;

    for(int i=1; i<visit.size(); i++) {
        if(visit[i] == 0) {
            visit[i] = index;

            if(dfs(index+1, sum + abs(index - i), target, visit)) return true;

            visit[i] = 0;
        }
    }
    return false;
}

void sol() {
    ll n, k;
    cin >> n >> k;

    if(k % 2 == 1) {
        cout << "NO\n";
        return;
    }
    if(k > 3*n) {
        cout << "NO\n";
        return;
    }

    vector<int> visit(n+1, 0);
    if(dfs(1, 0, k, visit)) {
        cout << "YES\n";
        for(int i=1; i<=n; i++) {
            cout << visit[i] << ' ';
        }
        cout << endl;
    }
    else {
        cout << "NO\n";
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

