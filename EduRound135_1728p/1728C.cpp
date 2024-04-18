#include <bits/stdc++.h>
using namespace std;

void sol() {
	int n;
	cin >> n;
	priority_queue<int> a, b;
	for(int i=0, temp; i<n; i++) {
		cin >> temp;
		a.push(temp);
	}
	for(int i=0, temp; i<n; i++) {
		cin >> temp;
		b.push(temp);
	}
	
	int sum = 0;
	while(!a.empty()) {
		if(a.top() == b.top()) {
			a.pop();
			b.pop();
		}
		else if(a.top() > b.top()) {
			int temp = a.top(), dig = 0;
			a.pop();
			while(temp > 0) {
				dig++;
				temp /= 10;
			}
			a.push(dig);
			sum++;
		}
		else if(a.top() < b.top()) {
			int temp = b.top(), dig = 0;
			b.pop();
			while(temp > 0) {
				dig++;
				temp /= 10;
			}
			b.push(dig);
			sum++;
		}
	}
	cout << sum << endl;
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

