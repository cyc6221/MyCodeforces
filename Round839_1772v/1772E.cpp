#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, x;
	cin >> n;
	int a=0, b=0, c=0;
	for(int i=1; i<=n; i++) {
		cin >> x;
		if(x != i && x != n-i+1) b++;
		else if(x != i) a++;
		else c++;
	}
	
	if(a + b <= c) cout << "First\n";
	else if(c + b < a) cout << "Second\n";
	else cout << "Tie\n";
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

