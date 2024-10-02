using ll = long long;
ll mod = 1e9 + 7;

/*compute a^n (fast)*/
ll pow(ll a, ll n) { 
    if(n == 0) return 1;

    if(n & 1) return pow((a * a) % mod, (n-1)/2) * a % mod;
    else return pow((a * a) % mod, n/2) % mod;
}

/*matrix multiply*/
vector<vector<ll>> mul(vector<vector<ll>>& m1, vector<vector<ll>>& m2) {
    // m1 : c1 * r1
    // m2 : c2 * r2
    ll c1 = m1.size(), r1 = m1[0].size();
    ll c2 = m2.size(), r2 = m2[0].size();
    vector<vector<ll>> res(26, vector<ll>(26, 0));
    for(int i=0; i<26; i++) {
        for(int j=0; j<26; j++) {
            res[i][j] = 0;

            for(int k=0; k<26; k++) {
                res[i][j] += m1[i][k] * m2[k][j];
                res[i][j] %= mod;
            }
        }
    }
    return res;
}