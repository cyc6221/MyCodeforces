#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void init(vector<vector<int>>& v) {
    for(int i=0; i<v.size(); i++) {
        for(int j=0; j<v[0].size(); j++) {
            v[i][j] = 0;
        }
    }
}

/*
int dfs(vector<vector<char>>& temp, int i, int j, vector<vector<int>>& visit) {
    if(visit[i][j]) return 0;
    visit[i][j] = 1;

    if(temp[i][j] == '.') return 0;

    int a=0, b=0, c=0, d=0;
    if(i+1<temp.size())     a=dfs(temp, i+1, j, visit);
    if(j+1<temp[0].size())  b=dfs(temp, i, j+1, visit);
    if(i-1>=0)              c=dfs(temp, i-1, j, visit);
    if(j-1>=0)              d=dfs(temp, i, j-1, visit);
    return a+b+c+d+1;
}
*/

int dfs(vector<vector<char>>& temp, int i, int j) {
    //if(visit[i][j]) return 0;
    //visit[i][j] = 1;

    if(temp[i][j] == '.') return 0;
    temp[i][j] = '.';

    int a=0, b=0, c=0, d=0;
    if(i+1<temp.size())     a=dfs(temp, i+1, j);
    if(j+1<temp[0].size())  b=dfs(temp, i, j+1);
    if(i-1>=0)              c=dfs(temp, i-1, j);
    if(j-1>=0)              d=dfs(temp, i, j-1);
    return a+b+c+d+1;
}

void sol() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> g(n, vector<char>(m, '$'));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> g[i][j];
        }
    }

    int res = 0;
    vector<vector<char>> temp(n, vector<char>(m, '$'));
    vector<vector<int>> visit(n, vector<int>(m, 0));
    for(int i=0; i<n; i++) {
        temp = g;
        for(int j=0; j<m; j++) {
            temp[i][j] = '#';
        }
        //init(visit);
        //int t = dfs(temp, i, 0);
        //res = max(res, t);
        res = max(res, dfs(temp, i, 0));
    }
    //cout << res << endl;
    for(int j=0; j<m; j++) {
        temp = g;
        for(int i=0; i<n; i++) {
            temp[i][j] = '#';
        }
        //init(visit);
        //int t = dfs(temp, 0, j);
        //res = max(res, t);
        res = max(res, dfs(temp, 0, j));
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

