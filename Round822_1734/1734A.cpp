#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;
int main() {
	int test;
	cin >> test;
	while(test--) {
		int num, MIN = INT_MAX;
		cin >> num;
		vector<int> stick(num, 0);
		for(int i=0; i<num; i++) cin >> stick[i];
		sort(stick.begin(), stick.end());
		for(int i=2; i<num; i++) MIN = min(MIN, stick[i] - stick[i-2]);
		cout << MIN << endl;
	}
	return 0;
}
