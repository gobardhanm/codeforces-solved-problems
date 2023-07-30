#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    for(int i=0; i < n; ++i){
        s.push_back('_');
    }
    for(int i=0; i < n; ++i){
        if(s[i+2] == '0' && s[i+3] != '0'){
            int x = s[i] - '0';
            x = x * 10 + s[i + 1] - '0';
            ans.push_back('a'+ x-1);
            i += 2;
        }
        else{
            ans.push_back('a' + s[i] - '0'- 1);
        }
    }
    cout << ans << "\n";
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) {
        solve();
    }

    return 0;
}
