//	Problem:	1A

#include <iostream>
using namespace std;
int main() {
	long long int m, n, a;
	while(cin >> m >> n >> a) {
		m = (m % a == 0) ? m / a : m / a + 1;
		n = (n % a == 0) ? n / a : n / a + 1;
		cout << m * n << endl;
	}
	return 0;
}
