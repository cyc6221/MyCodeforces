#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
	string str;
	cin >> str;
	int arr[26] = {0};
	int count=0;
	for(int i=0; i<str.length(); i++) {
		if(arr[str[i]-'a'] == 0) {
			count++;
			arr[str[i]-'a'] = 1;
		}
	}
	if(count % 2 == 1) cout << "IGNORE HIM!\n";
	else cout << "CHAT WITH HER!\n";
	return 0;
}

