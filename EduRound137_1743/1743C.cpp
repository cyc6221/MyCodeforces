#include <iostream>
#include <string>
#include <vector>

using namespace std;
int n;
string s;
int sum(vector<int>& mag, int i, vector<int>& visit) {
	if(i == n) return 0;

	int mx = 0;
	if(s[i] == '1') {
		s[i] = '0';
		if(i-1 >= 0 && visit[i-1] == 0) {
			visit[i-1] = 1;
			mx = max(mx, mag[i-1] + sum(mag, i+1, visit));
			visit[i-1] = 0;
		}
		if(visit[i] == 0) {
			visit[i] = 1;
			mx = max(mx, mag[i] + sum(mag, i+1, visit));
			visit[i] = 0;
		}
		return mx;
	}
	return sum(mag, i+1, visit);
}
int main() {
	int test;
	cin >> test;
	while(test--) {
		//int n;
		//string s;
		
		cin >> n >> s;
		vector<int> mag(n);
		for(int i=0; i<n; i++) cin >> mag[i];
		
		vector<int> visit(n, 0);
		
		cout << sum(mag, 0, visit) << endl;
	}
	return 0;
}

