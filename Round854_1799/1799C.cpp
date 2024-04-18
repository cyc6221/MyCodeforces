#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	string str;
	cin >> str;
	int n = str.length();
	if(n == 1) {
		cout << str << endl;
		return;
	}
	
	sort(str.rbegin(), str.rend());
	for(int i=0; i<=n/2; i++) {
		for(int j=n-1; j>i; j--) {
			if(str[i] < str[j]) break;
			
			string temp = str;
			swap(temp[j], temp[i]);

			string temp2 = temp;
			reverse(temp2.begin(), temp2.end());

			temp = max(temp, temp2);
			str = min(str, temp);
		}
	}
	/*
	for(int i=0; i<=n/2; i++) {
		for(int j=i+1; j<n; j++) {
			if(str[i] <= str[j]) continue;
			
			string temp = str;
			swap(temp[j], temp[i]);
			
			string temp2 = temp;
			reverse(temp2.begin(), temp2.end());
			
			temp = max(temp, temp2);
			str = min(str, temp);
			

			for(int ii=0, jj=n-1; ii<jj; ii++, jj--) {
				if(temp[ii] < temp[jj]) {
					swap(temp[ii], temp[jj]);
					break;
				}
				else if(temp[ii] > temp[jj]) {
					break;
				}
			}

			if(temp < str) {
				str = temp;
			}

		}
	}*/
	cout << str << endl;
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

