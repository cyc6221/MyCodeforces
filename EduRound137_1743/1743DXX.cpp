#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
int calnum(string a) {
	int num = 0;
	for(int i=0; i<a.size(); i++) {
		num *= 2;
		if(a[i] == '1') num += 1;
	}
	return num;
}
string tostr(int num) {
	string s;
	while(num > 0) {
		if(num % 2 == 1) s = "1" + s;
		else s = "0" + s;
		num /= 2;
	}
	return s;
}
int main() {
	int n;
	string str, oor, res;
	cin >> n >> str;

	for(int i=0; i<n; i++) {
		if(str[i] == '1') oor += '0';
		else if(str[i] == '0') oor += '1';
	}
	while(oor.front() == '0') oor.erase(oor.begin());
	//cout << oor << endl;

	int len = oor.length(), found = 0;
	for(int x = calnum(oor); x>=0; x--) {
		string temp = tostr(x);
		//cout << x << " " << temp << endl;
		if(str.find(temp) != string::npos) {
			res = temp;
			break;
		}
	}
	
	for(int i=0; i<str.size(); i++) {
		if(str[i] == '0') {
			for(int j=0; j < res.size(); j++) {
				if(str[i] == '0') str[i] = res[j];
				i++;
			}
			break;
		}
	}
	while(str.front() == '0' && str.size() > 1) str.erase(str.begin());
	cout << str << endl;;

	return 0;
}

