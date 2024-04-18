#include <iostream>
#include <string>
using namespace std;
int main() {
	int test, size, temp;
	cin >> test;
	while(test--) {
		string s, t;
		cin >> size >> t;
		for(int i=0; i<size; i++) {
			if(i+2 < size && t[i+1] == '0' && t[i+2] == '0') {
				if(t[i] == '1') s += "j";   	//10
				else if(t[i] == '2') s += "t";	//20
				i += 2;
			}
			else if(i+2 < size && t[i+2] == '0') {
				if(i+3 < size && t[i+3] == '0') {
					temp = t[i] - '0';
					s += (char)(temp + 96);
				}
				else {
					temp = (t[i] - '0') * 10 + (t[i+1] - '0');
					s += (char)(temp + 96);
					i += 2;
				}
			}
			else {
				temp = t[i] - '0';
				s += (char)(temp + 96);
			}
		}
		cout << s << endl;
	}
	return 0;
}
