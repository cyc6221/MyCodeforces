#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
char arr[8][8];
bool blue() {
	for(int i=0, check; i<8; i++) {
		check = 1;
		for(int j=0; j<8 && check; j++) {
			if(arr[i][j] != 'R') check = 0;
		}
		if(check) return true;
	}
	return false;
}
int main() {
	int test;
	cin >> test;
	while(test--) {
		for(int i=0; i<8; i++) {
			for(int j=0; j<8; j++) {
				cin >> arr[i][j];
			}
		}
		if(blue()) cout << "R\n";
		else cout << "B\n";
	}
	return 0;
}
