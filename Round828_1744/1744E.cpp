#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
unsigned long long int GCD(unsigned long long int a, unsigned long long int b) {
	unsigned long long int t;
	while(b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main() {
	int test;
	cin >> test;
	while(test--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int check=0;
		unsigned long long int tar = a*b, div;
		for(int i=a+1; i<=c && !check; i++) {
			if(i % tar == 0) {
				cout << i << ' ' << d << endl;
				check = 1;
			}
			else {
				unsigned long long int g = GCD(tar, i);
				if(g > 1) {
					div = tar / g;
					if(d - b >= div) {
						for(int x = b+1; x <= d; x++) {
							if(x % div == 0) {
								cout << i << ' ' << x << endl;
								check = 1;
							}
						}
					}
				}
			}
		}
		for(int i=b+1; i<=d && !check; i++) {
			if(i % tar == 0) {
				cout << i << ' ' << c << endl;
				check = 1;
			}
			else {
				unsigned long long int g = GCD(tar, i);
				if(g > 1) {
					div = tar / g;
					if(c - a >= div) {
						for(int x = a+1; x <= c; x++) {
							if(x % div == 0) {
								cout << i << ' ' << x << endl;
								check = 1;
							}
						}
					}
				}
			}
		}
		if(!check) cout << "-1 -1\n";
	}
	return 0;
}
