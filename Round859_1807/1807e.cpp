#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	
	int i = 0, j = n, mid, sum, guess;
	while(true) {
		if(j-i == 1) {
			cout << "! " << i+1 << endl;
			fflush(stdout);
			break;
		}
		
		mid = (i+j) / 2;
		sum = 0;
		
		cout << "? " << mid-i << ' ';
		for(int x=i; x<mid; x++) {
			cout << x+1 << ' ';
			sum += a[x];
		}
		cout << endl;
		fflush(stdout);
		
		cin >> guess;
		if(guess == sum) {
			i = mid;
		}
		else {
			j = mid;
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

