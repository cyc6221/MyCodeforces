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
		int a, b, c, d, check = 0;
		cin >> a >> b >> c >> d;
		unsigned long long int tar = a*b;

		if(c - a + 1 >= tar) {
			for(int x = a+1; x<=c && !check; x++)
				if(x % tar == 0) {
					cout << x << ' ' << d << endl;
					check = 1;
				}
		}
		if(d - b + 1 >= tar) {
			for(int x = b+1; x<=d && !check; x++)
				if(x % tar == 0) {
					cout << c << ' ' << x << endl;
					check = 1;
				}
		}

		for(int i=a+1; i<=c && !check; i++) {
			//unsigned long long int g = GCD(tar, i);
			//if(g != 1) {
				for(int j=b+1; j<=d && !check; j++) {
					if(i * j % tar == 0) {
						cout << i << ' ' << j << endl;
						check = 1;
					}
				}
			//}
		}
		if(!check) cout << "-1 -1\n";
	}
	return 0;
}

