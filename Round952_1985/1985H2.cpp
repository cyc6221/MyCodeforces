#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;
 
void dfs(vector<vector<char>>& g, ll i, ll j, set<ll>& I, set<ll>& J, ll& num) {
    if(g[i][j] == '.') return;
    g[i][j] = '.';
    num++;
    
    if(i-1 >= 0) I.insert(i-1);
    I.insert(i);
    if(i+1 < g.size()) I.insert(i+1);
    if(j-1 >= 0) J.insert(j-1);
    J.insert(j);
    if(j+1 < g[0].size()) J.insert(j+1);
 
    if(i+1<g.size() && g[i+1][j] == '#')    dfs(g, i+1, j, I, J, num);
    if(j+1<g[0].size() && g[i][j+1] == '#') dfs(g, i, j+1, I, J, num);
    if(i-1>=0 && g[i-1][j] == '#')          dfs(g, i-1, j, I, J, num);
    if(j-1>=0 && g[i][j-1] == '#')          dfs(g, i, j-1, I, J, num);
}
 
void sol() {
    ll n, m, res = 0, cnt = 0;
    cin >> n >> m;
    vector<vector<char>> g(n, vector<char>(m, '$'));
 
    vector<ll> dotI(n, 0), dotJ(m, 0);
    vector<vector<ll>> com(n, vector<ll>(m, 0));
 
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> g[i][j];
            if(g[i][j] == '.') {
                dotI[i]++;
                dotJ[j]++;
                //com[i][j] = -1;
                cnt++;
            }
        }
    }
    if(cnt == n * m) {
        cout << n + m - 1 << endl;
        return;
    }

    vector<vector<char>> temp(g);
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(temp[i][j] == '.') continue;
            set<ll> I, J;
            ll num = 0;
            dfs(temp, i, j, I, J, num);
            
            for(auto& ii : I) dotI[ii] += num;
            for(auto& jj : J) dotJ[jj] += num;
           
            for(auto& ii : I) {
                for(auto& jj : J) {
                    com[ii][jj] += num;
                }
            }
        }
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(g[i][j] == '.') res = max(res, dotI[i] + dotJ[j] - com[i][j] - 1);
            else res = max(res, dotI[i] + dotJ[j] - com[i][j]);
        }
    }

    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int test; cin >> test;
	for(int i=1; i<=test; i++) {
        //cout << "test " << i << endl;
		sol();
	}
	return 0;
}