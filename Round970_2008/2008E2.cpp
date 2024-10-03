#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

int check(int n, string s) {
    int even_sum = 0, odd_sum = 0;

    vector<int> even(26, 0), odd(26, 0);
    for(int i=0; i<n; i++) {
        if(i % 2 == 0) {
            even[s[i] - 'a'] ++;
            even_sum++;
        }
        else {
            odd[s[i] - 'a'] ++;
            odd_sum++;
        }
    }

    return (even_sum - *max_element(even.begin(), even.end())) 
        + (odd_sum - *max_element(odd.begin(), odd.end()));

    /*
    int cnt = 0, once = 0;

    int even_mx = *max_element(even.begin(), even.end());
    once = 0;
    for(auto& num : even) {
        if(num == even_mx) {
            if(once) cnt += num;
            once ++;
        }
        else cnt += num;
    }

    int odd_mx = *max_element(odd.begin(), odd.end());
    once = 0;
    for(auto& num : odd) {
        if(num == odd_mx) {
            if(once) cnt += num;
            once ++;
        }
        else cnt += num;
    }

    return cnt;
    */
}

void sol() {
    int n;
    string s;
    cin >> n >> s;
    if(n % 2 == 1) {
        int even_sum = 0, odd_sum = 0;

        vector<int> even(26, 0), odd(26, 0);
        for(int i=1; i<n; i++) {
            if(i % 2 == 0) {
                even[s[i] - 'a'] ++;
                even_sum++;
            }
            else {
                odd[s[i] - 'a'] ++;
                odd_sum++;
            }
        }

        int res = 1 + (even_sum - *max_element(even.begin(), even.end())) 
            + (odd_sum - *max_element(odd.begin(), odd.end()));

        for(int i=1; i<n; i++) {
            if(i % 2 == 0) {
                even[s[i-1] - 'a'] ++;
                //even_sum++;
                even[s[i] - 'a'] --;
                //even_sum--;
            }
            else {
                odd[s[i-1] - 'a'] ++;
                //odd_sum++;
                odd[s[i] - 'a'] --;
                //odd_sum--;
            }

            res = min(res, 
                1 + (even_sum - *max_element(even.begin(), even.end())) 
                + (odd_sum - *max_element(odd.begin(), odd.end()))
            );
        }
        cout << res << endl;

        /*
        int res = n;
        for(int i=0; i<n; i++) { 
            string temp = s;
            temp.erase(temp.begin() + i);
            res = min(res, 1 + check(n-1, temp));
        }
        cout << res << endl;
        */
    }
    else {
        cout << check(n, s) << endl;
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