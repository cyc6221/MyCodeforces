#include <bits/stdc++.h>
using namespace std;

string pi = "314159265358979323846264338327950288419716939937510";
void sol() {
	string str;
	cin >> str;
	int c = 0;
	for(int i=0; i<str.length(); i++) {
		if(str[i] != pi[i]) break;
		else c++;
	}
	cout << c << endl;
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

