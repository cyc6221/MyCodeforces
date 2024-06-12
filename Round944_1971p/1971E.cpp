#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

int BS(vector<ll>& A, ll d, int l, int r) {
	int mid = (l+r) / 2;
	//if(A[l] <= d && d < A[l+1]) return l;
	if(A[mid] <= d && d < A[mid+1]) return mid;
	else if(d < A[mid]) return BS(A, d, l, mid);
	else return BS(A, d, mid+1, r);
}

void sol() {
	int n, k, q;
	cin >> n >> k >> q;
	vector<ll> A(k+1), B(k+1);
	A[0] = 0, B[0] = 0;
	for(int i=1; i<=k; i++) {
		cin >> A[i];
	}
	for(int i=1; i<=k; i++) {
		cin >> B[i];
	}

	while(q--) {
		ll d, next = 0;
		cin >> d;
		/*
		for(int i=0; i<=k; i++) {
			if(d == A[i]) {
				cout << B[i] << endl;
				next = 1;
				break;
			}
		}
		*/
		if(d == A[k]) {
			cout << B[k] << endl;
		}
		//if(!next) {
		else {
			int i = BS(A, d, 0, k);
			//double speed = (double)(B[i+1] - B[i]) / (double)(A[i+1] - A[i]) * (double)(d - A[i]);
			//double time = speed + (double)B[i];
			//cout << (int)time << endl;
			//ll res = floor(time);
			ll res = B[i] + ((d-A[i])*(B[i+1]-B[i])) / (A[i+1]-A[i]);
			cout << res << endl;

			/*
			for(int i=0; i+1<=k; i++) {
				if(A[i] < d && d < A[i+1]) {
					double speed = (double)(B[i+1] - B[i]) / (double)(A[i+1] - A[i]);
					//cout << speed << ' ';
					double time = (double)(d - A[i]) * speed + B[i];
					//cout << time << " ";
					cout << (int)time << endl;
				}
			}
			*/
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

