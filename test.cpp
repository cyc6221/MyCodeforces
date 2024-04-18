#include<bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin>>num;
    while(num--) {
        string string;
        cin>>string;
        vector<int> arr[26];
        for(int i=0;i<string.size();i++) {
            arr[string[i] - 'a'].push_back(i);
        }
        int start=string[0] - 'a',end=string.back() - 'a';
        vector<int> answer;
        for(int i=start;;i<=end?i++:i--) {
            for(auto j:arr[i]) answer.push_back(j+1);
            if(i==end) break;
        }
        cout << abs(end-start) << ' ' << answer.size() << endl;
        for(auto n:answer) {
            cout << n << ' ';
        }
        cout<<endl;
    }
    cout<<endl;
}
