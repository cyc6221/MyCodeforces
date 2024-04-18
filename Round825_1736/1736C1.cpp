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
		int n;
		cin >> n;
		vector<int> vt(n);
		for(int i=0; i<n; i++) cin >> vt[i];

		int count=0;
		for(int i=0, next; i<n; i=next) {
			int index = 1;
			next = i+1;
			//cout<<"i"<<i<<endl;
			for(int j=i; j<n; j++) {
				if(vt[j] >= index) count++;
				else {
					next = j - vt[j] + 1;
					break;
				}
				index++;
			}
			//cout<<count<<endl;
		}
		cout<<count<<endl;
	}
	return 0;
}

