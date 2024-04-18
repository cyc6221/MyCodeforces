#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

void sol() {
	int n, m, x1, y1, x2, y2, d;
	cin >> n >> m >> x1 >> y1 >> x2 >> y2;
	
	string D;
	cin >> D;
	//int dir[4][2] = {{1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
					  //DR    	DL       UR        UL
					  
	if(x1 == x2 && y1 == y2) {
		cout << "0\n";
		return;
	}
	
	set<vector<int>> s;
	if(D == "DR") d = 1;
	else if(D == "DL") d = 2;
	else if(D == "UR") d = 3;
	else if(D == "UL") d = 4;
	s.insert({x1, y1, d});

	int x=x1, y=y1, step = 0;
	while(true) {
		//cout << "x" << x << " y" << y << endl;
		if(D == "DR") {
			/*if(x == n && y == 1) {
				cout << "-1\n";
				return;
			}
			else if(x == 1 && y == m) {
				cout << "-1\n";
				return;
			}
			else */if(x == n && y == m) {
				D = "UL";
				step ++;
				x--, y--;
			}
			else if(x == n) {
				D = "UR";
				step ++;
				x--, y++;
			}
			else if(y == m) {
				D = "DL";
				step ++;
				x++, y--;
			}
			else x++, y++;
		}
		else if(D == "DL") {
			/*if(x == 1 && y == 1) {
				cout << "-1\n";
				return;
			}
			else if(x == n && y == m) {
				cout << "-1\n";
				return;
			}
			else */if(x == n && y == 1) {
				D = "UR";
				step ++;
				x--, y++;
			}
			else if(x == n) {
				D = "UL";
				step ++;
				x--, y--;
			}
			else if(y == 1) {
				D = "DR";
				step ++;
				x++, y++;
			}
			else x++, y--;
		}
		else if(D == "UR") {
			/*if(x == 1 && y == 1) {
				cout << "-1\n";
				return;
			}
			else if(x == n && y == m) {
				cout << "-1\n";
				return;
			}
			else */if(x == 1 && y == m) {
				D = "DL";
				step ++;
				x++, y--;
			}
			else if(x == 1) {
				D = "DR";
				step ++;
				x++, y++;
			}
			else if(y == m) {
				D = "UL";
				step ++;
				x--, y--;
			}
			else x--, y++;
		}
		else if(D == "UL") {
			/*if(x == n && y == 1) {
				cout << "-1\n";
				return;
			}
			else if(x == 1 && y == m) {
				cout << "-1\n";
				return;
			}
			else*/ if(x == 1 && y == 1) {
				D = "DR";
				step ++;
				x++, y++;
			}
			else if(x == 1) {
				D = "DL";
				step ++;
				x++, y--;
			}
			else if(y == 1) {
				D = "UR";
				step ++;
				x--, y++;
			}
			else x--, y--;
		}
		//else cout << "wrong\n";
		
		if(D == "DR") d = 1;
		else if(D == "DL") d = 2;
		else if(D == "UR") d = 3;
		else if(D == "UL") d = 4;
		
		if(x == x2 && y == y2) {
			cout << step << endl;
			return;
		}
		
		if(s.count({x, y, d})) {
			cout << "-1\n";
			return;
		}
		else {
			s.insert({x, y, d});
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int test; cin >> test;
	for(int i=1; i<=test; i++) {
		sol();
	}
	return 0;
}

