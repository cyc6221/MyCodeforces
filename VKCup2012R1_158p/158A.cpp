#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
int sol() {
	int n, k, count=0, temp, num;
	cin >> n >> k;
	for(int i=1; i<=n; i++) {
		cin >> temp;
		if(temp == 0) return count;
		if(i == k) num = temp;
		
		if(i >= k && temp == num) count++;
		else if(i < k) count++;
	}
	return count;
}
int main() {
	cout << sol() << endl;
	
	return 0;
}

