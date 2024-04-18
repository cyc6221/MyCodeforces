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

		int n, k;
		cin >> n >> k;
		vector<int> p(n+1), depth(n+1, -1), child(n+1, 1);
		for(int i=2; i<=n; i++) {
			cin >> p[i];
			child[p[i]] = 0;
		}

		depth[1] = 0;
		for(int c=1; c; ) {
			//cout << c<<endl;
			c=0;
			for(int i=2; i<=n; i++) {
				if(depth[p[i]] == -1) c=1;
				if(depth[p[i]] != -1) {
					depth[i] = depth[p[i]] + 1;
				}
			}
		}
		//for(int i=1; i<=n; i++) cout << depth[i]<<' ';
		
		
		
		vector<int> len;
		vector<int>::iterator mx, found;
		for(int i=2; i<=n; i++) {
			if(child[i] == 1) len.push_back(depth[i]);
		}
		
		while(k--) {
			mx = max_element(len.begin(), len.end());
			int temp = *mx;
			*mx /= 2;
			len.push_back(temp-*mx);
		}
		mx = max_element(len.begin(), len.end());
		cout << *mx << endl;
	}
	return 0;
}

/*
using namespace std;
int main() {
	int test;
	cin >> test;
	while(test--) {
		int n, k;
		cin >> n >> k;
		vector<int> p(n+1), depth(n+1, -1), c;
		for(int i=2, color=0; i<=n; i++) {
			cin >> p[i];
			if(p[i] == 1) {
				depth[i] = color;
				color++;
				c.push_back(1);
			}
        }
        cout<<c.size()<<endl;
        int check=0;
		while(!check) {
			check = 1;
			for(int i=2; i<=n; i++) {
				if(depth[p[i]] == -1) check=0;
				else if(depth[p[i]] != -1) {
					depth[i] = depth[p[i]];
					c[depth[i]]++;
				}
			}
		}

		vector<int>::iterator mx;
		while(k--) {
			mx = max_element(c.begin(), c.end());
			int temp = *mx;
			*mx /= 2;
			//int d = (depth[mxi] % 2) ? depth[mxi] / 2 : (depth[mxi]+1) / 2;
			c.push_back(temp-*mx);
		}

		mx = max_element(depth.begin(), depth.end());
		cout << *mx << endl;
	}
	return 0;
}
*/
