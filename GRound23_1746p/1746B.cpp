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
		vector<int> arr(n);
		for(int i=0; i<n; i++) cin >> arr[i];
		
		int count=0;
		for(int i=0, j=n-1; i<j; i++, j--) {
			while(i<n && arr[i] != 1) i++;
			while(j>=0 && arr[j] != 0) j--;
			if(i < j) {
				swap(arr[i], arr[j]);
				count ++;
			}
		}
		cout << count << endl;
	}
	return 0;
}

