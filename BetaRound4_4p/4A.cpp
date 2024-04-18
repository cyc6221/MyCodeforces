//	Problem:	4A

#include <iostream>
using namespace std;
int main() {
	int w;
	while(cin >> w) {
		if(w == 2) cout << "NO";
		else if(w % 2 == 0) cout << "YES";
		else cout << "NO";
	}
	return 0;
}
