#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, d, k;
	cin >> n >> d >> k;
	vector<vector<int>> job(k, vector<int>(2, 0));
	for(int i=0; i<k; i++) {
		cin >> job[i][0] >> job[i][1];
	}
	sort(job.begin(), job.end());

	int B = n, Bd = 0, M = n, Md = n;
	int cnt = 0;
	for(int i=0, j=0; j<k; j++) {
		while(i < j && job[i][1] < job[j][0] - d + 1) {
			i++;
			cnt--;
		}
		cnt++;
		//cout << "de " << j << ' ' << cnt << endl;

		if(Bd < cnt) {
			Bd = cnt;
			B = max(job[j][0] - d + 1, 1);
		}
	}

	cnt = 0;
	//sort(job.rbegin(), job.rend());
	for(int h=0, i=0, j=0; i<k; i++) {
		if(i > 1 && job[i][0] - job[i-1][1] > d) {
			Md = 0;
			M = job[i-1][1] + 1;
			break;
		}

		while(h < i && job[i][0] > job[h][1]) {
			h++;
			cnt--;
		}
		while(j < k && job[i][0] + d - 1 >= job[j][0]) {
			j++;
			cnt++;
		}
		//cout << "ii  " << i << ' ' << cnt << endl;
		if(Md > cnt) {
			Md = cnt;
			//M = min(job[i][0], n);
			M = job[i][0];
		}
	}

	cnt = 0;
	for(int i=0; i<k; i++) {
		if(job[i][0] < d) cnt++;
		else break;
	}
	if(Md > cnt) {
		M = 1;
	}
	if(job[k-1][1] + d <= n) {
		M = 1;
	}

	cout << B << ' ' << M << endl;
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