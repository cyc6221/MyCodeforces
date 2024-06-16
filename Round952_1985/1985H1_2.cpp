#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

vector<set<int>> component_i, component_j;
vector<int> N;

void dfs(vector<vector<char>>& g, int i, int j, set<int>& I, set<int>& J, int& num) {
    if(g[i][j] == '.') return;
    g[i][j] = '.';
    num++;
    
    I.insert(i-1);
    I.insert(i);
    I.insert(i+1);
    J.insert(j-1);
    J.insert(j);
    J.insert(j+1);

    if(i+1<g.size() && g[i+1][j] == '#')    dfs(g, i+1, j, I, J, num);
    if(j+1<g[0].size() && g[i][j+1] == '#') dfs(g, i, j+1, I, J, num);
    if(i-1>=0 && g[i-1][j] == '#')          dfs(g, i-1, j, I, J, num);
    if(j-1>=0 && g[i][j-1] == '#')          dfs(g, i, j-1, I, J, num);
}

void sol() {
    component_i.clear();
    component_j.clear();
    N.clear();

    int n, m;
    cin >> n >> m;
    vector<vector<char>> g(n, vector<char>(m, '$'));

    vector<int> dotI(n, 0), dotJ(m, 0);

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> g[i][j];
            if(g[i][j] == '.') {
                dotI[i]++;
                dotJ[j]++;
            }
        }
    }

    vector<vector<char>> temp(g);
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(temp[i][j] == '.') continue;
            set<int> I, J;
            int num = 0;
            dfs(temp, i, j, I, J, num);
            component_i.push_back(I);
            component_j.push_back(J);
            N.push_back(num);

            for(auto& ii : I) if(ii>=0 && ii<n) dotI[ii]+=num;
            for(auto& jj : J) if(jj>=0 && jj<m) dotJ[jj]+=num;
        }
    }
    //cout << component_i.size() << ' ' << component_j.size() << ' ' << N.size() << endl;

    /*
    int res = 0, sz = component_i.size();
    for(int i=0; i<n; i++) {
        int cnt = 0;
        for(int c=0; c<sz; c++) {
            if(component_i[c].count(i)) cnt += N[c];
        }
        //for(int j=0; j<m; j++) {
        //    if(g[i][j] == '.') cnt++;
        //}
        cnt += dotI[i];
        res = max(res, cnt);
    }
    for(int j=0; j<m; j++) {
        int cnt = 0;
        for(int c=0; c<sz; c++) {
            if(component_j[c].count(j)) cnt += N[c];
        }
        //for(int i=0; i<n; i++) {
        //    if(g[i][j] == '.') cnt++;
        //}
        cnt += dotJ[j];
        res = max(res, cnt);
    }
    */

    int res = 0;
    for(auto& ii : dotI) res = max(res, ii);
    for(auto& jj : dotJ) res = max(res, jj);
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

