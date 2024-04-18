#include <bits/stdc++.h>
using namespace std;

void sol() {
	int n;
	string str;
	cin >> n >> str;
	sort(str.begin(), str.end());
	cout << str.back() - 'a' + 1 << endl;
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

