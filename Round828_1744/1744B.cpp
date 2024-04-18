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
		int n, q, odd=0, even=0;
		unsigned long long int sum = 0;
		cin >> n >> q;
		for(int i=0, temp; i<n; i++) {
			cin >> temp;
			sum += temp;
			if(temp % 2 == 0) even++;
			else odd++;
		}
		for(int i=0, op, num; i<q; i++) {
			cin >> op >> num;
			if(op == 0) {
				sum += even * num;
				cout << sum << endl;
				if(num % 2 == 1) {
					odd += even;
					even = 0;
				}
			}
			else if(op == 1) {
				sum += odd * num;
				cout << sum << endl;
				if(num % 2 == 1) {
					even += odd;
					odd = 0;
				}
			}
		}
	}
	return 0;
}

