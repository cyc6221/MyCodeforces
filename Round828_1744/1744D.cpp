#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
int two(int num) {
	int c=0;
	while(num > 0) {
		if(num%2 == 1) return c;
		if(num%2 == 0) c++;
		num /= 2;
	}
	return c;
}
int main() {
	int test;
	cin >> test;
	while(test--) {
		int n, p;
		cin >> n;
		p = n;
		vector<int> bit(32, 0);
		vector<unsigned long long int> arr(n+1);
		for(int i=1; i<=n; i++) {
			cin >> arr[i];
			int b = two(arr[i]);
			p -= b;
			bit[two(i)]++;
		}
		
		//cout << "p" << p << endl;
		
		if(p <= 0) {
			cout << 0 << endl;
		}
		else {
			int op = 0;
			for(int i=31; i>=0; i--) {
				//cout << i <<' ' << bit[i] << endl;
				while(bit[i] > 0) {
					bit[i]--;
					p -= i;
					op++;
					if(p <= 0) break;
				}
				if(p <= 0) break;
			}
			if(p > 0) cout << "-1\n";
			else cout << op << endl;
		}
	}
	return 0;
}
