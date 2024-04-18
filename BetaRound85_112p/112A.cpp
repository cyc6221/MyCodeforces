#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;

int check(string &str1, string &str2) {
	int size = str1.size(), a, b;
	for(int i=0; i<size; i++) {
		a = str1[i]-'a';
		if(a < 0 || a > 25) a = str1[i] - 'A';
		b = str2[i]-'a';
		if(b < 0 || b > 25) b = str2[i] - 'A';
		
		if(a > b) return 1;
		if(a < b) return -1;
	}
	return 0;
}

int main() {
	string str1, str2;
	cin >> str1 >> str2;
	cout << check(str1, str2);
	return 0;
}

