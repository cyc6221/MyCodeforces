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
		unsigned long long int l, r, count = 0, ll, rr, temp;
		cin >> l >> r;
		
		ll = sqrt(l);
		rr = sqrt(r);
		
		if(r == l) count = 1;
		else {
			count = rr - ll - 1;
			count *= 4;
			
			temp = (ll+1) * (ll+1) - 1;
			//cout<<l<<endl;
			cout<<temp<<endl;
			if(temp == l) count++;
			if(l < temp) {
				count++;
				temp -= ll;
				if(temp == l) count++;
				if(l < temp) {
					count++;
					temp -= ll;
					if(temp == l) count++;
				}
			}

			
			cout<<count<<endl;
			temp = rr*rr;
			if(temp == r && temp-1 != l) count++;
			if(r > temp) {
				count++;
				temp += rr;
			}
			if(temp == r) count++;
			if(r > temp) {
				count++;
				temp += rr;
			}
			if(temp == r) count++;
		}
		//cout<<count<<endl;
		cout << count << endl;
	}
	return 0;
}
