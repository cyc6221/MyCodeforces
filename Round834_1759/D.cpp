#include <bits/stdc++.h>
using namespace std;

void sol() {
	unsigned long long n, m;
	cin >> n >> m;
	
	unsigned long long two=0, five=0;
	unsigned long long t = n;
	while(t % 2 == 0) {
		t /= 2;
		two ++;
	}
	while(t % 5 == 0) {
		t /= 5;
		five ++;
	}
	//cout << "two" << two << "five" << five << endl;
	
	vector<vector<unsigned long long>> dp(five+1, vector<unsigned long long>(two+1, 1));
	dp[0][0] = 1;
	for(unsigned long long i=0; i<=five; i++) {
		if(i > 0) dp[i][0] = dp[i-1][0] *2;
		for(unsigned long long j=1; j<=two; j++) {
			dp[i][j] = dp[i][j-1] * 5;
		}
	}
	
	unordered_map<unsigned long long, unsigned long long> ump;
	for(unsigned long long i=0; i<=five; i++) {
		for(unsigned long long j=0; j<=two; j++) {
			//cout << dp[i][j] << ' ';
			ump[dp[i][j]] = i+j;
		}
		//cout << endl;
	}
	
	unsigned long long mxnum=1, mxindex=0;
	for(auto u : ump) {
		if(u.first <= m && u.second > mxindex) {
			mxnum = u.first;
			mxindex = u.second;
		}
		else if(u.first <= m && u.second == mxindex) {
			if(u.first > mxnum) mxnum = u.first;
		}
	}
	
	//cout << "mx " << mxnum << ' ' << mxindex << endl;
	
	while(mxnum * 10 <= m) {
		mxnum *= 10;
	}
	for(unsigned long long i=9; i>1; i--) {
		if(mxnum * i <= m) {
			mxnum *= i;
			break;
		}
	}
	cout << mxnum * n << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		//cout << "Case #" << i << ": ";
		sol();
	}
	return 0;
}

