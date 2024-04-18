#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
	int a, b, year=0;
	cin >> a >> b;
	while(a <= b) {
		year++;
		a *= 3;
		b *= 2;
	}
	cout << year << endl;
	return 0;
}

