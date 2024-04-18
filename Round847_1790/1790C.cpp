#include <bits/stdc++.h>
using namespace std;

void sol() {
	int len, temp, temp2;
	cin >> len;
	
	set<int> s;
	for(int i=1; i<=len; i++) s.insert(i);
	
	unordered_map <int, int> ump;
	vector<int> res(len-1, 0);
	for(int i=0; i<len-1; i++) {
		cin >> temp;
		res[i] = temp;
		s.erase(temp);
		ump[temp] = i;
	}
	
	int loss;
	for(auto i : s) loss = i;
	
	int pre = -1;
	for(int i=0; i<len-1; i++) {
		for(int j=0; j<len-1; j++) {
			cin >> temp;
			if(temp == loss) {
				if(j == 0) pre = max(pre, -1);
				else pre = max(pre, ump[temp2]);
			}
			temp2 = temp;
		}
	}
	res.insert(res.begin()+pre+1, loss);
	for(auto i : res) cout << i << ' ';
	cout << endl;
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

