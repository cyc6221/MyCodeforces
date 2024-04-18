#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
	int banana, dollor, want, cost = 0;
	cin >> banana >> dollor >> want;
	for(int k=1; k<=want; k++) {
		cost += k * banana;
	}
	if(dollor > cost) cout << "0\n";
	else cout << cost - dollor << endl;
	return 0;
}

