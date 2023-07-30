#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s;
    cin >> s;
    if(s== "YES" || s== "Yes" || s== "YEs" || s== "yeS" || s== "yEs" || s== "yES" || s== "yes" ||   s == "YeS"){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
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
