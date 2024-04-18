#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

float avg(vector<float>& arr, int x) {
	float avg, sum = 0;
	if(x == 0) {
		for(int i=0; i<arr.size(); i++)
			sum += arr[i];
		avg = sum / arr.size();
		return avg;
	}
	else {
		sum = x;
		int c = 1;
		for(int i=0; i<arr.size(); i++) {
			if(arr[i] != x) {
				sum += arr[i];
				c++;
			}
		}
		avg = sum / c;
		return avg;
	}
}

int main() {
	int test;
	cin >> test;
	while(test--) {
		float maxi=0;
		int n, maxdr=-1, maxc;
		cin >> n;
		vector<int> dr(n);
		vector<float> ppl(n);
		for(int i=0; i<n; i++) cin >> ppl[i];
		for(int i=0; i<n; i++){
			cin >> dr[i];
			if(dr[i] > maxdr) {
				maxi = ppl[i];
				maxc = 1;
				maxdr = dr[i];
			}
			else if(dr[i] == maxdr) {
				maxi += ppl[i];
				maxc ++;
			}
		}
		maxi /= maxc;
		//cout<<"i"<<maxi<<"c "<<maxc<<"d "<<maxdr<<endl;
		
		float av;
		if(maxdr == 0) {
			av = avg(ppl, 0);
			cout << av << endl;
		}
		else {
			for(int i=0; i<n; i++) {
				if(maxi > ppl[i]) {
					ppl[i] += (maxdr - dr[i]);
					if(ppl[i] > maxi) ppl[i] = maxi;
				}
				else if(maxi < ppl[i]) {
					ppl[i] -= (maxdr - dr[i]);
					if(ppl[i] < maxi) ppl[i] = maxi;
				}
				//cout<<ppl[i]<<' ';
			}
			av = avg(ppl, maxi);
			cout << av << endl;
		}
	}
	return 0;
}
