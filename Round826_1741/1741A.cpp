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
		string a, b;
		cin >> a >> b;
		if(a.back() == 'L') {
			if(b.back() == 'L') {
				if(a.length() > b.length()) cout << ">\n";
				else if(a.length() < b.length()) cout << "<\n";
				else if(a.length() == b.length()) cout << "=\n";
			}
			else cout << ">\n";
		}
		else if(b.back() == 'L') {
			cout << "<\n";
		}
		else if(a.back() == 'M') {
			if(b.back() == 'M') {
				cout << "=\n";
			}
			else cout << ">\n";
		}
		else if(b.back() == 'M') {
			cout << "<\n";
		}
		else {
			if(a.length() > b.length()) cout << "<\n";
			else if(a.length() < b.length()) cout << ">\n";
			else if(a.length() == b.length()) cout << "=\n";
		}
	}
	return 0;
}
