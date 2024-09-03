#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
    int n;
    string s;
    cin >> n >> s;

    int d = sqrt(n);
    if(n != d * d) {
        cout << "NO\n";
        return;
    }

    int i = d, j = d;
    vector<vector<char>> g(d, vector<char>(d, '0'));
    int t = 0;
    for(int ii=0; ii<i; ii++) {
        for(int jj=0; jj<j; jj++) {
            g[ii][jj] = s[t];
            t++;
        }
    }

    int cheak = 1;
    for(int ii=0; ii<i && cheak; ii++) {
        if(g[ii][0] == '0') cheak = 0;
        if(g[ii][j-1] == '0') cheak = 0;
    }
    for(int jj=0; jj<j && cheak; jj++) {
        if(g[0][jj] == '0') cheak = 0;
        if(g[i-1][jj] == '0') cheak = 0;
    }
    for(int ii=1; ii<i-1 && cheak; ii++) {
        for(int jj=1; jj<j-1 && cheak; jj++) {
            if(g[ii][jj] == '1') cheak = 0;
        }
    }
    
    if(cheak) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
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

