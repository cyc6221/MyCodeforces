#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;
int main() {
	int test;
	cin >> test;
	while(test--) {
		string str;
		cin >> str;
		int len = str.size(), tempmin, mn, mnindex;
		
		bool check = false;
		while(!check) {
			//cout<<"hello\n";
			//cout<<str<<endl;
			check = true;
			mn = 0;
			mnindex = 0;
			for(int i=0; i+1 < len; i++) {
				if(str[i] - str[i+1] > 0) {
					tempmin = min(str[i] - '0' + 1, 9);
					if(tempmin > mn) {
						mn = tempmin;
						mnindex = i;
					}
					//str.erase(str.begin() + i);
					//i--;
					check = false;
				}
			}
			
			if(!check) {
				str.erase(str.begin() + mnindex);
				len--;
				for(int i=0; i<len; i++) {
					if(str[i] - '0' >= mn) {
						str.insert(str.begin() + i, '0'+mn);
						break;
					}
				}
			}
		}
		cout << str << endl;
	}
	return 0;
}
