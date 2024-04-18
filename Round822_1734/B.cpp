#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>

using namespace std;
int main() {
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		
		for(int i=1; i<=n; i++) {
			if(i == 1) cout << "1" << endl;
			else if(i % 2 == 0) {
				for(int j=i; j>1; j--) cout << "1 ";
				cout << "1" << endl;
			}
			else if(i % 2 == 1) {
				cout << "1 ";
				for(int j=i-1; j>1; j--) cout << "0 ";
				cout << "1" << endl;
			}
		}
	}
	return 0;
}
