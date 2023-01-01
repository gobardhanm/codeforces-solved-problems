#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    for(int i=0; i< n; ++i){
        if(s[i] == 'R'){
            if(t[i] != 'R'){ cout << "NO\n"; return; }
        }
        else{if(t[i] == 'R'){ cout << "NO\n"; return; }}
    }
    cout << "YES\n";
        
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
