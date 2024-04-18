#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
	int test;
	cin >> test;
	while(test--) {
		int n ,q;
		cin >> n >> q;
		vector<unsigned long long int> a(n), k(q), sum(n+1, 0);
		for(int i=0; i<n; i++) {
			cin >> a[i];
			if(i == 0) sum[i] = a[i];
			else sum[i] = sum[i-1] + a[i];
		}
		for(int i=0; i<q; i++) cin >> k[i];
		//cout<<endl;
		//for(int i=0; i<n; i++) cout << sum[i] << ' ';
		

		for(int j=0; j<q; j++) {
			int check = 0;
			if(k[j] < a[0]) cout << "0 ";
			else {
				for(int l=1; l<n && !check; l++) {
					if(k[j] < a[l]) {
						cout << sum[l-1] << ' ';
						check = 1;
					}
				}
				if(!check) cout << sum[n-1] << ' ';
			}
		}
		cout << endl;

	}
	return 0;
}

