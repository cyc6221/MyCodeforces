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
		unsigned int n, sum=0, div, check, th=INT_MAX, tempth, seg;
		cin >> n;
		vector<int> vt(n);
		for(int i=0; i<n; i++) {
			cin >> vt[i];
			sum += vt[i];
		}
		for(int i=n; i>0; i--) {
			//cout<<"f\n";
			if(sum % i == 0) {
				div = sum / i;
				check = 1;
				tempth = 0;
				for(int j=0; j<n && check; j++) {
					int temp = vt[j];
					seg=1;
					while(temp != div && check) {
						//cout<<"f\n";
						if(temp > div) check = 0;
						else if(temp < div) {
							seg++;
							j++;
							temp += vt[j];
						}
					}
					if(temp == div) tempth=max(tempth, seg);
				}
				if(check) th = min(th, tempth);
			}
		}
		cout << th << endl;
	}
	return 0;
}
