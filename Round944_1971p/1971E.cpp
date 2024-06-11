#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, k, q;
	cin >> n >> k >> q;
	vector<int> A(k+1), B(k+1);
	vector<double> speed(k+1);
	A[0] = 0, B[0] = 0;
	for(int i=1; i<=k; i++) {
		cin >> A[i];
	}
	for(int i=1; i<=k; i++) {
		cin >> B[i];

	}
	while(q--) {
		int d;
		cin >> d;
		if(d == A[k]) {
			cout << B[k] << endl;
			continue;
		}
		for(int i=0; i+1<=k; i++) {
			if(d == A[i]) {
				cout << B[i] << endl;
				break;
			}
			if(A[i] < d && d < A[i+1]) {
				double speed = (double)(B[i+1] - B[i]) / (double)(A[i+1] - A[i]);
				//cout << speed << ' ';
				double time = (double)(d - A[i]) * speed + B[i];
				//cout << time << " ";
				cout << (int)time << endl;
			}
		}
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

