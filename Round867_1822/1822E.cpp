#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, same = 0, res = 0;
	string s;
	cin >> n >> s;
	if(n % 2 == 1) {
		cout << "-1\n";
		return;
	}
	vector<int> a(26, 0);
	unordered_map <char, int> ump;
	for(int i=0, j=n-1; i<j; i++, j--) {
		a[s[i]-'a']++;
		a[s[j]-'a']++;
		if(s[i] == s[j]) {
			ump[s[i]] ++;
		}
	}
	
	for(int i=0; i<26; i++) {
		if(a[i] > n / 2) {
			cout << "-1\n";
			return;
		}
	}
	
	priority_queue<int> pq;
	for(auto& i : ump) pq.push(i.second);

	while(pq.size() > 1) {
		int n1 = pq.top();
		pq.pop();
		int n2 = pq.top();
		pq.pop();
		
		res ++;
		n1--;
		if(n1 > 0) pq.push(n1);
		n2--;
		if(n2 > 0) pq.push(n2);
		
		/*
		res += n2;
		n1 -= n2;
		if(n1 > 0) pq.push(n1);
		*/
	}
	if(pq.size() > 0) res += pq.top();
	cout << res << endl;
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

