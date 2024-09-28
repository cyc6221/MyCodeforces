#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using unll = unsigned long long;

const int ALPHABET = 26;
const char MIN_CHAR = 'a';

void sol() {    
    int n;
    string s;
    cin >> n >> s;

    vector<vector<int>> prefix(n+1, vector<int>(52, 0)), suffix(n+1, vector<int>(52, 0));

    for(int i=0; i<n; i++) {
        prefix[i+1] = prefix[i];
        if(i % 2 == 0) prefix[i+1][s[i]-'a']++;
        else prefix[i+1][s[i]-'a' + 26]++;
    }
    for(int i=n-1; i>=0; i--) {
        suffix[i] = suffix[i+1];
        if(i % 2 == 0) suffix[i][s[i]-'a']++;
        else suffix[i][s[i]-'a' + 26]++;
    }

    auto solve = [](const vector<int>& counts) -> int {
        return (
            *max_element(counts.begin(), counts.begin() + 26) + 
            *max_element(counts.begin() + 26, counts.end()) 
        );
    };

    int res = 0;
    if(n % 2 == 0) {
        res = solve(prefix.back());
    }
    else {
        for(int i=0; i<n; i++) {
            vector<int> temp = prefix[i];
            for(int j=0; j<26; j++) {
                temp[j] += suffix[i+1][j+26];
                temp[j+26] += suffix[i+1][j];
            }
            
            /*
            for(int c=0; c<26; c++) {
                temp[c] += suffix[i+1][26+c];
            }
            for(int c=0; c<26; c++) {
                temp[26+c] += suffix[i+1][c];
            }
            */
            /*
            for(int p=0; p<=1; p++) {
                for(int c=0; c<26; c++) {
                    temp[p*26 + c] += suffix[i+1][!p * 26 + c];
                }
            }
            */
            res = max(res, solve(temp));
        }
    }
    cout << n - res << endl;


    ///////////
    /*
    int N;
    string S;
    cin >> N >> S;
    array<int, 2 * ALPHABET> empty = {};
    vector<array<int, 2 * ALPHABET>> prefix_count(N + 1, empty), suffix_count(N + 1, empty);
 
    for (int i = 0; i < N; i++) {
        prefix_count[i + 1] = prefix_count[i];
        prefix_count[i + 1][i % 2 * ALPHABET + S[i] - MIN_CHAR]++;
    }
 
    for (int i = N - 1; i >= 0; i--) {
        suffix_count[i] = suffix_count[i + 1];
        suffix_count[i][i % 2 * ALPHABET + S[i] - MIN_CHAR]++;
    }
 
    auto solve = [](const array<int, 2 * ALPHABET> &counts) -> int {
        return (
            *max_element(counts.begin(), counts.begin() + ALPHABET) +
            *max_element(counts.begin() + ALPHABET, counts.end())
        );
    };
 
    int save = 0;
 
    if (N % 2 == 0) {
        save = solve(prefix_count.back());
    } else {
        for (int skip = 0; skip < N; skip++) {
            array<int, 2 * ALPHABET> counts = prefix_count[skip];
 
            for (int p = 0; p <= 1; p++)
                for (int c = 0; c < ALPHABET; c++)
                    counts[p * ALPHABET + c] += suffix_count[skip + 1][!p * ALPHABET + c];
 
            save = max(save, solve(counts));
        }
    }
 
    cout << N - save << '\n';
    */
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

