#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s;
    cin >> s;
    if((s[0]+s[1]+s[2])==(s[3]+s[4]+s[5])){
        cout << "YES\n";
    }
    else { cout << "NO\n"; }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) {
        solve();
    }
    
    return 0;
}
