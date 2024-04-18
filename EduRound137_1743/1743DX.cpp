#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>

using namespace std;
int calnum(string a, string b) {
	for(int i=0; i<a.size(); i++) {
		if(a[i] == '0') {
			for(int j=0; j < b.size(); j++) {
				a[i] = b[j];
				i++;
			}
			break;
		}
	}
	int num=0;
	for(int i=0; i<a.size(); i++) {
		num *= 2;
		if(a[i] == '1') num += 1;
	}
	return num;
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
	
	int mx = calnum(str, "0");
	int len = oor.length(), found = 0;
	for(int l = len; l > 0; l--) {
		for(int head = 0; head + l <= len; head++) {
			string sub = oor.substr(head, l);
			cout << sub << endl;
			
			if(str.find(sub) != string::npos) {
				string aand;
				cout << aand << endl;
				/*
				//found = 1;
				int temp = calnum(str, sub);
				cout << temp << endl;
				if(temp > mx) {
					mx = temp;
					res = sub;
				}
				*/
			}
		}
		//if(found) break;
	}
	cout << "f\n";
	for(int i=0; i<str.size(); i++) {
		if(str[i] == '0') {
			for(int j=0; j < res.size(); j++) {
				str[i] = res[j];
				i++;
			}
			break;
		}
	}
	cout << str << endl;;
	
	return 0;
}

