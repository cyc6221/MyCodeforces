#include <bits/stdc++.h>
using namespace std;

void sol() {
	int a, b;
	string A, B;
	cin >> a >> b >> A >> B;
	reverse(B.begin(), B.end());
	A.insert(A.end(), B.begin(), B.end());
	for(int i=0, count=0; i+1<A.length(); i++) {
		if(A[i] == A[i+1]) {
			count++;
			if(count > 1) {
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
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

