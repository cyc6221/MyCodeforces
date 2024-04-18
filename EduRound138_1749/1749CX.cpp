#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end(), greater<int>());
        
        int res=0;
        for(int j=1; j<=n; j++){
            int cur=j;
			for(int i=0; i<n-j+1; i++) if(a[i] <= cur) cur--;
            if(cur==0) res=j;
        }
        cout << res << "\n";
	}
	return 0;
}

