#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;
int main() {
	int test;
	cin >> test;
	while(test--) {
		int num;
		cin >> num;
		vector<int> stick(num, 0);
		for(int i=0; i<num; i++) cin >> stick[i];
		sort(stick.begin(), stick.end());
		
		int MIN = INT_MAX;
		for(int i=0; i<num; i++) {
			if(i+2 < num && stick[i] == stick[i+1] && stick[i+1] == stick[i+2]) {
				MIN = 0;
				break;
			}
			
			else if(i+1 < num && stick[i] == stick[i+1]) {
				if(i > 0) MIN = min(MIN, stick[i] - stick[i-1]);
				if(i+2 < num) MIN = min(MIN, stick[i+2] - stick[i+1]);
			}
		}
		//cout<<MIN<<endl;
		if(MIN != INT_MAX) cout << MIN << endl;
		else {
			for(int i=1; i+1<num; i++) {
				MIN = min(MIN, stick[i+1] - stick[i-1]);
			}
			cout << MIN << endl;
		}
	}
	return 0;
}
