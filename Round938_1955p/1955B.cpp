#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> target(n*n);
    for(int i=0; i<n*n; i++) {
        cin >> target[i];
    }
    sort(target.begin(), target.end());

    int mn = target[0];
    vector<int> check;
    for(int i=0; i<n; i++) {
        check.push_back(mn);
        int temp = mn + d;
        for(int j=1; j<n; j++) {
            check.push_back(temp);
            temp += d;
        }
        mn += c;
    }
    sort(check.begin(), check.end());
    for(int i=0; i<n*n; i++) {
        if(target[i] != check[i]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

    /*
    unordered_map <int, int> ump;
    for(int t=0, num; t<n*n; t++) {
        cin >> num;
        ump[num]++;
        mn = min(mn, num);
    }
    
    for(int i=0; i<n; i++) {
        if(ump[mn] == 0) {
            cout << "NO\n";
            return;
        }
        ump[mn]--;

        int next = mn + d;
        for(int j=1; j<n; j++) {
            if(ump[next] == 0) {
                cout << "NO\n";
                return;
            }
            ump[next]--;
            next += d;
        }
        mn += c;
    }
    cout << "YES\n";
    */
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