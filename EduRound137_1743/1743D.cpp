#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
	int n;
	string str;
	cin >> n >> str;
	
	int mn=n, mx=-1, cont=0, one=0, tone=0;
	for(int i=0; i<n; i++) {
		if(str[i] == '0') {
			mn = min(mn, i);
			mx = max(mx, i);
			cont = 0;
		}
		else if(str[i] == '1') {
			if(cont == 1) {
				tone++;
			}
			else if(cont == 0) {
				tone = 1;
				cont = 1;
			}
			one = max(one, tone);
		}
	}
	int zero = mx - mn + 1;
	cout << zero << ' ' << one << endl;
	
	for(int i=0; i<n && one > 0; i++) {
		if(str[i] == '0') {
			str[i] = '1';
			one--;
		}
	}
	cout << str << endl;
	
	return 0;
}

