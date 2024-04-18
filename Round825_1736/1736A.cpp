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
		int n, check=1, count=0, x=0, y=0;
		cin >> n;
		vector<int> a(n), b(n);
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		for(int i=0; i<n; i++) {
			cin >> b[i];
			if(b[i] != a[i]) {
				check = 0;
				if(a[i] == 1) count++;
				else count--;
			}
			if(a[i] == 1 && b[i] == 0) x = 1;
			if(a[i] == 0 && b[i] == 1) y = 1;
		}
		//cout<<numa<<' '<<numb<<endl;
		count = abs(count);
		if(x && y) count++;
		
		if(check == 1) cout<<"0\n";
		else cout<<count<<endl;
		//else if(count>0) cout<<count<<endl;
		//else cout<<"1\n";
	}
	return 0;
}
