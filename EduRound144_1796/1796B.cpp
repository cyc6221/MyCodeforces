#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	string a, b;
	cin >> a >> b;
	
	if(a[0] == b[0]) {
		cout << "Yes\n";
		cout << a[0] << "*" << endl;
		return;
	}
	if(a.back() == b.back()) {
		cout << "Yes\n";
		cout << "*" << a.back() << endl;
		return;
	}
	
	for(int i=0; i+1<a.length(); i++) {
		string s = a.substr(i, 2);
		if(b.find(s) != string::npos) {
			cout << "Yes\n";
			cout << "*" << s << "*" << endl;
			return;
		}
	}
	cout << "NO\n";
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

