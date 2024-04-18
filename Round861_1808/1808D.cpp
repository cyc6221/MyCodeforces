#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, k;
	cin >> n >> k;
	
	vector<int> vt(n, 0);
	for(int i=0; i<n; i++) {
		cin >> vt[i];
	}
	
	int res = 0, d = k/2;
	for(int i=d; i+d<n; i++) {
		for(int j=1; j<=d; j++) {
			if(vt[i-j] !=vt[i+j]) res++;
		}
	}
	
	cout << res << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	//int test; cin >> test;
	//for(int i=1; i<=test; i++) {
		sol();
	//}
	return 0;
}

